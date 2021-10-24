cmake_minimum_required(VERSION 3.9)

project("WhatsYourName")

if (UNIX AND NOT APPLE)
    set(CMAKE_EXECUTABLE_SUFFIX ".out")
endif()

add_executable("whats-your-name" "src/whats-your-name.cpp")