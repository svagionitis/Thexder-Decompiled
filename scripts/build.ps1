<#
.SYNOPSIS
    Cross-platform build script for Windows.

.DESCRIPTION
    Configures and builds the Thexder & Firehawk Decompiled project using CMake,
    runs automated tests, and verifies code formatting.

.PARAMETER Config
    Build configuration: Release (default) or Debug.

.PARAMETER Clean
    Performs a clean build by removing the build directory before configuring.

.PARAMETER Test
    Runs the automated CTest suite after building.

.PARAMETER CheckFormat
    Verifies code style and IWYU header inclusion prior to building.

.PARAMETER ExtractAssets
    Runs sar_extractor to unpack Firehawk game assets into build/extracted_assets.

.EXAMPLE
    .\scripts\build.ps1
    .\scripts\build.ps1 -Config Debug -Test
    .\scripts\build.ps1 -Clean -Test -ExtractAssets
#>

[CmdletBinding()]
param(
    [ValidateSet("Release", "Debug", "RelWithDebInfo")]
    [string]$Config = "Release",

    [switch]$Clean,
    [switch]$Test,
    [switch]$CheckFormat,
    [switch]$ExtractAssets
)

$ErrorActionPreference = "Stop"
$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$RepoRoot = Split-Path -Parent $ScriptDir
$BuildDir = Join-Path $RepoRoot "build"

Set-Location $RepoRoot

Write-Host "=== Thexder / Firehawk Build System (Windows) ===" -ForegroundColor Cyan
Write-Host "Configuration : $Config"
Write-Host "Repository    : $RepoRoot"
Write-Host "Build Dir     : $BuildDir"

# Step 0: Check Formatting / IWYU if requested
if ($CheckFormat) {
    Write-Host "`n--- Running Code Style & Header Checks ---" -ForegroundColor Yellow
    python scripts/verify_clang_format.py
    if ($LASTEXITCODE -ne 0) {
        Write-Error "Code style verification failed."
    }
    python scripts/verify_iwyu_cstdint.py
    if ($LASTEXITCODE -ne 0) {
        Write-Error "IWYU header verification failed."
    }
    Write-Host "[OK] Code style and headers verified cleanly." -ForegroundColor Green
}

# Step 1: Clean build directory if requested
if ($Clean) {
    Write-Host "`n--- Cleaning Build Directory ---" -ForegroundColor Yellow
    if (Test-Path $BuildDir) {
        Remove-Item -Recurse -Force $BuildDir
        Write-Host "[OK] Removed $BuildDir" -ForegroundColor Green
    }
}

# Step 2: Configure with CMake
Write-Host "`n--- Configuring Project with CMake ---" -ForegroundColor Yellow
$cmakeConfigArgs = @("-B", "build", "-DCMAKE_BUILD_TYPE=$Config")

# Prefer Visual Studio generator on Windows if available
if (-not (Test-Path (Join-Path $BuildDir "CMakeCache.txt"))) {
    $cmakeConfigArgs += @("-G", "Visual Studio 17 2022")
}

cmake @cmakeConfigArgs
if ($LASTEXITCODE -ne 0) {
    Write-Error "CMake configuration failed."
}

# Step 3: Compile targets
Write-Host "`n--- Compiling Project ($Config) ---" -ForegroundColor Yellow
cmake --build build --config $Config --parallel
if ($LASTEXITCODE -ne 0) {
    Write-Error "Build compilation failed."
}
Write-Host "[OK] Compilation completed successfully." -ForegroundColor Green

# Step 4: Run Tests if requested
if ($Test) {
    Write-Host "`n--- Running CTest Automated Test Suite ---" -ForegroundColor Yellow
    ctest --test-dir build -C $Config --output-on-failure
    if ($LASTEXITCODE -ne 0) {
        Write-Error "CTest test suite failed."
    }
    Write-Host "[OK] 100% Tests Passed." -ForegroundColor Green
}

# Step 5: Extract assets if requested
if ($ExtractAssets) {
    Write-Host "`n--- Extracting Firehawk Assets ---" -ForegroundColor Yellow
    $extractorExe = Join-Path $BuildDir "tools\$Config\sar_extractor.exe"
    if (-not (Test-Path $extractorExe)) {
        # Fallback for single-config generators (Ninja/Make)
        $extractorExe = Join-Path $BuildDir "tools\sar_extractor.exe"
    }

    if (Test-Path $extractorExe) {
        $outAssets = Join-Path $BuildDir "extracted_assets"
        & $extractorExe "assets/firehawk" $outAssets
        if ($LASTEXITCODE -ne 0) {
            Write-Error "Asset extraction failed."
        }
        Write-Host "[OK] Firehawk assets extracted to: $outAssets" -ForegroundColor Green
    } else {
        Write-Warning "sar_extractor executable not found at: $extractorExe"
    }
}

Write-Host "`n=== Build Finished Successfully ===" -ForegroundColor Green

