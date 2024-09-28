@echo off 
set /p cmt="Delete branch name?: "
git branch -D %cmt%