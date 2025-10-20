
cmake_minimum_required(VERSION 3.10)
project(hpc-tp2 LANGUAGES CXX)

# set -fPIC (Position Independent Code) to on
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Set C++11 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find all source files in src/
file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/src/*.cpp")

# Create the Questions executable from all source files
add_executable(Questions ${SRC_FILES})

# Add src directory to the include path for the Questions target
target_include_directories(Questions PRIVATE ${CMAKE_SOURCE_DIR}/src)



