cmake_minimum_required(VERSION 3.21)
project(format VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

# LIBS
## GTEST
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
option(INSTALL_GTEST "Enable installation of googletest." OFF)
FetchContent_MakeAvailable(googletest)

# format
add_library(format INTERFACE)
target_include_directories(format INTERFACE include)

add_executable(format-test EXCLUDE_FROM_ALL test/format.test.cpp)
target_link_libraries(format-test PUBLIC format gtest_main)
target_include_directories(format-test PUBLIC include)