@echo off 
set /p cmt="New branch name :"
git checkout -b %cmt%