@echo off
rem build.bat - Windows convenience launcher
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0scripts\build.ps1" %*

