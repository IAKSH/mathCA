cmake_minimum_required(VERSION 3.5)

project(autoCA)

add_compile_options(
    -std=c++17
    -fexec-charset=GBK
    -finput-charset=UTF-8
)

add_executable(
    autoCA
    source/main.cpp
    source/mathext.cpp
    source/comb.cpp
    source/arra.cpp
    #source/ui.cpp
)