cmake_minimum_required(VERSION 3.0.0)

project(ZEISS_Project)
set(CMAKE_CXX_STANDARD 11)

add_executable(main main.cpp)

add_library(module1 src/module.cpp)

target_include_directories(module1 PUBLIC $(CMAKE_CURRENT_SOURCE_DIR)/header)

target_link_libraries(main PRIVATE module1)