# export_all_ghidra.ps1 - Batch import and comprehensive export for all Firehawk binaries

$ErrorActionPreference = "Stop"
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$repoRoot = Split-Path -Parent $scriptDir

. (Join-Path $scriptDir "env_setup.ps1")

$ghidraHeadless = Join-Path $env:GHIDRA_HOME "support\analyzeHeadless.bat"
$projectDir = Join-Path $repoRoot "build\ghidra"
$projectName = "firehawk"
$outDir = Join-Path $repoRoot "reference\raw_decompiled"
$scriptPath = Join-Path $repoRoot "scripts\ghidra"

if (-not (Test-Path $outDir)) {
    New-Item -ItemType Directory -Path $outDir -Force | Out-Null
}

$binaries = @(
    "GAME.EXE",
    "SIERRA.EXE",
    "DEMO.EXE",
    "INSTALL.EXE",
    "MCGA320.DRV",
    "EGA640.DRV",
    "SNDBLAST.DRV",
    "ADL.DRV",
    "MT32.DRV",
    "IBMKBD.DRV",
    "JOYSTICK.DRV"
)

foreach ($bin in $binaries) {
    $binPath = Join-Path $repoRoot "assets\firehawk\$bin"
    if (-not (Test-Path $binPath)) {
        Write-Warning "Binary not found: $binPath"
        continue
    }

    Write-Host ">>> Processing $bin in Ghidra..." -ForegroundColor Cyan
    
    # 1. Import and analyze if not already imported
    $argsImport = @(
        "`"$projectDir`"",
        "$projectName",
        "-import `"$binPath`"",
        "-processor `"x86:LE:16:Real Mode`"",
        "-overwrite",
        "-scriptPath `"$scriptPath`"",
        "-postScript ExportComprehensiveDecompiled.java `"$outDir`""
    )

    $psi = New-Object System.Diagnostics.ProcessStartInfo
    $psi.FileName = $ghidraHeadless
    $psi.Arguments = $argsImport -join " "
    $psi.RedirectStandardInput = $true
    $psi.RedirectStandardOutput = $true
    $psi.RedirectStandardError = $true
    $psi.UseShellExecute = $false

    $proc = [System.Diagnostics.Process]::Start($psi)
    $proc.StandardInput.Close()
    $stdout = $proc.StandardOutput.ReadToEnd()
    $stderr = $proc.StandardError.ReadToEnd()
    $proc.WaitForExit()

    if ($proc.ExitCode -eq 0) {
        Write-Host "[OK] $bin exported successfully." -ForegroundColor Green
    } else {
        Write-Warning "Ghidra exited with code $($proc.ExitCode) for $bin"
    }
}

Write-Host "All Ghidra decompilation and disassembly exports completed!" -ForegroundColor Green

