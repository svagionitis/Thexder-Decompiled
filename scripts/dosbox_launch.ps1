# dosbox_launch.ps1 - Launch Firehawk in DOSBox for reference verification

$ErrorActionPreference = "Stop"
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$repoRoot = Split-Path -Parent $scriptDir

. (Join-Path $scriptDir "env_setup.ps1")

$dosboxExe = Join-Path $env:DOSBOX_HOME "DOSBox.exe"
$confFile = Join-Path $repoRoot "tools\dosbox_firehawk.conf"

if (-not (Test-Path $dosboxExe)) {
    Write-Error "DOSBox executable not found at: $dosboxExe"
}

if (-not (Test-Path $confFile)) {
    Write-Error "DOSBox configuration not found at: $confFile"
}

Write-Host "Launching Firehawk in DOSBox..." -ForegroundColor Cyan
Set-Location $repoRoot
Start-Process -FilePath $dosboxExe -ArgumentList "-conf `"$confFile`" -noconsole"

