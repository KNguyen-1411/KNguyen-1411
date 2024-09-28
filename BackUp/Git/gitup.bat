@echo off 
set /p cmt="Commit :"
git add .
git commit -m "%cmt%"
git push