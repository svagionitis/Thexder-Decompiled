<#
.SYNOPSIS
    Root convenience launcher for scripts/build.ps1
#>
[CmdletBinding()]
param(
    [Parameter(ValueFromRemainingArguments = $true)]
    [string[]]$ForwardArgs
)

$ScriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
& (Join-Path $ScriptDir "scripts\build.ps1") @PSBoundParameters @ForwardArgs

