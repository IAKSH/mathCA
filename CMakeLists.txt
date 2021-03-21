cmake_minimum_required( VERSION 3.5 )

project( mathca )

add_compile_options(
    -std=c++17
    # if yout need chinese console output on Windows
    -fexec-charset=GBK
    -finput-charset=UTF-8
)

include_directories( ./head )
aux_source_directory( ./source DIR_SRCS )

add_executable( mathca ${DIR_SRCS} )
