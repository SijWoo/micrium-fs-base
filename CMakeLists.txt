cmake_minimum_required(VERSION 3.10)

project(rtos)


add_subdirectory(common)
add_subdirectory(kernel)
add_subdirectory(ports)


add_subdirectory(fs)

add_subdirectory(shell)

