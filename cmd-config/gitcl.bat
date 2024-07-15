@echo off 
set /p cmt="Git clone:  " 
set /p name="Name folder: "
git clone %cmt%
cd %name%
Code .
