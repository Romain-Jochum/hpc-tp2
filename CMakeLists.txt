cmake_minimum_required(VERSION 3.10)
project(Allumette LANGUAGES CXX)

# set -fPIC (Position Independent Code) to on
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Set C++11 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find all source files
file(GLOB SRC_FILES "src/*.cpp")

# Create the executable
add_executable(main ${SRC_FILES})

# Add includes directory
target_include_directories(main PRIVATE include)



