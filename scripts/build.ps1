param(
    [Parameter(Mandatory = $true)][string]$Source,
    [switch]$Run
)
$ErrorActionPreference = 'Stop'
$sourcePath = (Resolve-Path -LiteralPath $Source).Path
if ([IO.Path]::GetExtension($sourcePath) -ne '.c') { throw 'Open a .c file first.' }
$env:Path = 'C:/msys64/ucrt64/bin;' + $env:Path
$program = [IO.Path]::ChangeExtension($sourcePath, '.exe')
& 'C:/msys64/ucrt64/bin/gcc.exe' -std=c11 -Wall -Wextra -pedantic -O0 -g3 -finput-charset=UTF-8 -fexec-charset=UTF-8 $sourcePath -o $program
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
if ($Run) {
    [Console]::InputEncoding = [System.Text.UTF8Encoding]::new()
    [Console]::OutputEncoding = [System.Text.UTF8Encoding]::new()
    $OutputEncoding = [Console]::OutputEncoding
    & $program
    exit $LASTEXITCODE
}
