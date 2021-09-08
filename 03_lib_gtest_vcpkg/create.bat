if NOT EXIST .\build mkdir build
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=c:\src\vcpkg\scripts\buildsystems\vcpkg.cmake
pause .