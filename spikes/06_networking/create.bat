cd server
del /s /f /q build
call create.bat
cd ..\..
cd client
del /s /f /q build
call create.bat
cd ..\..
pause .
