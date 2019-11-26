cmake_minimum_required(VERSION 3.15)
project(package_module)

set(CMAKE_CXX_STANDARD 17)

add_executable(package_all package_all.cpp)
add_executable(package_modules package_modules.cpp)