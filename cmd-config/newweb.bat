@echo off
set /p name="Name web:"
mkdir %name% 
cd %name%
echo. > index.html
mkdir css
cd css 
echo. > style.css
cd ..
mkdir script
cd script
echo. > script.js
cd ..
mkdir img
cd img
cd ..
