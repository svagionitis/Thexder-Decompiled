<#
.SYNOPSIS
    Root convenience launcher for scripts/build.ps1
#>
$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
& (Join-Path $ScriptDir "scripts\build.ps1") @args

