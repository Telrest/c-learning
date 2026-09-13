param(
    [Parameter(Mandatory = $true)][string]$Source,
    [switch]$Run
)
$ErrorActionPreference = 'Stop'
$sourcePath = (Resolve-Path -LiteralPath $Source).Path
if ([IO.Path]::GetExtension($sourcePath) -ne '.c') { throw 'Open a .c file first.' }
$root = Split-Path $PSScriptRoot -Parent
$outputDir = Join-Path $root 'build'
$null = New-Item -ItemType Directory -Path $outputDir -Force
$vswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio/Installer/vswhere.exe'
if (!(Test-Path -LiteralPath $vswhere)) { throw 'Install Visual Studio C++ build tools first.' }
$installation = & $vswhere -latest -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
if (!$installation) { throw 'Visual Studio C++ build tools were not found.' }
& (Join-Path $installation 'Common7/Tools/Launch-VsDevShell.ps1') -Arch amd64 -HostArch amd64 -SkipAutomaticLocation -NoLogo | Out-Null
$base = [IO.Path]::GetFileNameWithoutExtension($sourcePath)
$program = Join-Path $outputDir ($base + '.exe')
Push-Location $outputDir
try {
    & cl.exe /nologo /TC /std:c17 /utf-8 /W4 /Zi /Od $sourcePath "/Fe:$program" "/Fo:$outputDir/" "/Fd:$outputDir/compiler.pdb" /link /DEBUG:FULL /INCREMENTAL:NO
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
    if ($Run) {
        & $program
        exit $LASTEXITCODE
    }
} finally { Pop-Location }
