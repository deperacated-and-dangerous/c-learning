cmake_minimum_required(VERSION 3.25)
project(c_learning C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(c_learning
        main.c
        math.c
)

target_compile_options(c_learning PRIVATE
            -march=native -O0
            -std=c17
            -flto # Link-time optimization
            -fno-strict-aliasing # Pointers of different types can point to the same memory location
            -Wall -Wextra -Wshadow -ggdb3 -Wconversion -Werror # Errors
            #$<$<CONFIG:Debug>:-O0>
            #$<$<CONFIG:Release>:-O3>
)

target_include_directories(c_learning PRIVATE
        ${CMAKE_SOURCE_DIR}/Headers
)

target_link_libraries(c_learning PRIVATE m) # m is math lib