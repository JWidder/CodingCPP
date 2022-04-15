mkdir c:\src
cd c:\src
pause .
git clone https://github.com/Microsoft/vcpkg.git
call .\vcpkg\bootstrap-vcpkg.bat
call .\vcpkg\vcpkg integrate install
call .\vcpkg\vcpkg install gtest:x64-windows
call "C:\work\CodingCPP\01_hello_world\create.bat"
call "C:\work\CodingCPP\07_ray_tracer_cpp\create.bat"
call "C:\work\CodingCPP\08_data_transfer\create.bat"
call "C:\work\CodingCPP\09_MoveData\create.bat"

pause .
