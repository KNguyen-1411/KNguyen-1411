@echo off
set /p name="Name cpp: "
mkdir %name%
cd %name%
echo. > %name%.cpp
echo. > test.inp
echo. > test.out