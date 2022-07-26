@echo off
call setEnv.bat
"P:\Matlab\R2022a\toolbox\shared\coder\ninja\win64\ninja.exe" -t compdb cc cxx cudac > compile_commands.json
"P:\Matlab\R2022a\toolbox\shared\coder\ninja\win64\ninja.exe" -v %*
