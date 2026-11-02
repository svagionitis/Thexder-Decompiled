# ghidra_import.ps1 - Automated Ghidra import for Firehawk DOS executables

$ErrorActionPreference = "Stop"
$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$repoRoot = Split-Path -Parent $scriptDir

. (Join-Path $scriptDir "env_setup.ps1")

$ghidraHeadless = Join-Path $env:GHIDRA_HOME "support\analyzeHeadless.bat"
$projectDir = Join-Path $repoRoot "build\ghidra"
$projectName = "firehawk"

if (-not (Test-Path $projectDir)) {
    New-Item -ItemType Directory -Path $projectDir -Force | Out-Null
}

$gameExe = Join-Path $repoRoot "assets\firehawk\GAME.EXE"
$sierraExe = Join-Path $repoRoot "assets\firehawk\SIERRA.EXE"

Write-Host "Creating/Updating Ghidra project at: $projectDir\$projectName" -ForegroundColor Cyan
$binaries = @(
    @{ Name = "GAME.EXE"; Path = $gameExe },
    @{ Name = "SIERRA.EXE"; Path = $sierraExe }
)

foreach ($b in $binaries) {
    Write-Host "Importing $($b.Name)..." -ForegroundColor Cyan
    $cmdArgs = @(
        "`"$projectDir`"",
        "$projectName",
        "-import `"$($b.Path)`"",
        "-processor `"x86:LE:16:Real Mode`"",
        "-overwrite"
    )

    $psi = New-Object System.Diagnostics.ProcessStartInfo
    $psi.FileName = $ghidraHeadless
    $psi.Arguments = $cmdArgs -join " "
    $psi.RedirectStandardInput = $true
    $psi.RedirectStandardOutput = $true
    $psi.RedirectStandardError = $true
    $psi.UseShellExecute = $false

    $proc = [System.Diagnostics.Process]::Start($psi)
    $proc.StandardInput.Close()
    $stdout = $proc.StandardOutput.ReadToEnd()
    $stderr = $proc.StandardError.ReadToEnd()
    $proc.WaitForExit()

    if ($proc.ExitCode -ne 0) {
        Write-Warning "Ghidra headless exited with code $($proc.ExitCode) for $($b.Name)"
        if ($stderr) {
            Write-Warning $stderr
        }
    }
    else {
        Write-Host "[OK] $($b.Name) imported and analyzed into Ghidra project." -ForegroundColor Green
    }
}