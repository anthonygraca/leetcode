# LeetCode Practice

## How to Build
### C++ Code with CMake
[CMake](https://cmake.org/) (version >= 3.19.7) is the build tool that manages all of the C++
code in this project. Code is compiled with a C++14 compiler.

#### Normal Usage
Do the "cmake dance". \
`mkdir build` to create a separate build folder to isolate generate cmake build
files. \
`cd build` to enter build folder. \
`cmake ..` to tell cmake to look at the CMakeLists.txt at project root. \
`make && make test` to compile source and run tests.

