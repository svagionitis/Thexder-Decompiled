# env_setup.ps1 - Environment configuration for reverse-engineering tools
# Configures GHIDRA_HOME, CUTTER_HOME, and DOSBOX_HOME for the current session.

$ErrorActionPreference = "Stop"

$DefaultGhidra = "C:\Users\Stavros\MyPrograms\ghidra_12.0.4_PUBLIC_20260303\ghidra_12.0.4_PUBLIC"
$DefaultCutter = "C:\Users\Stavros\MyPrograms\Cutter-v2.5.0-Windows-x86_64\Cutter-v2.5.0-Windows-x86_64"
$DefaultDosBox = "C:\Program Files (x86)\DOSBox-0.74-3"

if (-not $env:GHIDRA_HOME) {
    if (Test-Path $DefaultGhidra) {
        $env:GHIDRA_HOME = $DefaultGhidra
    }
}

if (-not $env:CUTTER_HOME) {
    if (Test-Path $DefaultCutter) {
        $env:CUTTER_HOME = $DefaultCutter
    }
}

if (-not $env:DOSBOX_HOME) {
    if (Test-Path $DefaultDosBox) {
        $env:DOSBOX_HOME = $DefaultDosBox
    }
}

Write-Host "=== Reverse-Engineering Toolchain Environment ==="
Write-Host "GHIDRA_HOME : $env:GHIDRA_HOME" -ForegroundColor Green
Write-Host "CUTTER_HOME : $env:CUTTER_HOME" -ForegroundColor Green
Write-Host "DOSBOX_HOME : $env:DOSBOX_HOME" -ForegroundColor Green

# Validate executables
$ghidraHeadless = Join-Path $env:GHIDRA_HOME "support\analyzeHeadless.bat"
$cutterExe = Join-Path $env:CUTTER_HOME "cutter.exe"
$dosboxExe = Join-Path $env:DOSBOX_HOME "DOSBox.exe"

$allValid = $true

if (-not (Test-Path $ghidraHeadless)) {
    Write-Warning "Ghidra headless analyzer not found at: $ghidraHeadless"
    $allValid = $false
}
else {
    Write-Host "[OK] Ghidra analyzeHeadless located." -ForegroundColor Cyan
}

if (-not (Test-Path $cutterExe)) {
    Write-Warning "Cutter executable not found at: $cutterExe"
    $allValid = $false
}
else {
    Write-Host "[OK] Cutter executable located." -ForegroundColor Cyan
}

if (-not (Test-Path $dosboxExe)) {
    Write-Warning "DOSBox executable not found at: $dosboxExe"
    $allValid = $false
}
else {
    Write-Host "[OK] DOSBox executable located." -ForegroundColor Cyan
}

if ($allValid) {
    Write-Host "All tools verified successfully." -ForegroundColor Green
}
