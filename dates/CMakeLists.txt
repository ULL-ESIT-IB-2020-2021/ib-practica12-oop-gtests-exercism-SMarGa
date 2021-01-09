cmake_minimum_required(VERSION 3.1)  


project(dates              
    VERSION 1.0
    DESCRIPTION "A simple CMake project for the Sort of dates"
    LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 14) 						
set(CMAKE_CXX_STANDARD_REQUIRED True)


find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/build)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")


include_directories(${PROJECT_SOURCE_DIR}/src)


add_executable(runTests
    test/gtest_main.cc
    test/test_date.cc
    src/dates.cc
    src/dates.h
    src/dates_main.cc
    )

add_executable(user_program
    src/dates.cc
    src/dates.h
		src/dates_main.cc)

target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# Add expected compiler features to a target.
target_compile_features(runTests PRIVATE cxx_std_14)

# Add compile options to a target.
target_compile_options(runTests PRIVATE -Wall -Wextra -Wpedantic)