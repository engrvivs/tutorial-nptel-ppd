cmake_minimum_required(VERSION 3.14)

if(${CMAKE_VERSION} VERSION_LESS 3.16)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.16)
endif()

# IMP: Set the project name here
set(MY_PROJECT_NAME "NPTEL_Cpp")

# Extract project's version
set(${MY_PROJECT_NAME}_VERSION_REGEX "#define PROJECT_VERSION[ \t]+\"(.+)\"")
# Read in the line, containing the version
file(STRINGS "${CMAKE_CURRENT_SOURCE_DIR}/include/Version.hpp"
    ${MY_PROJECT_NAME}_VERSION_STRING REGEX ${${MY_PROJECT_NAME}_VERSION_REGEX})
# Pick out just the version
string(REGEX REPLACE ${${MY_PROJECT_NAME}_VERSION_REGEX} "\\1"
    ${MY_PROJECT_NAME}_VERSION_STRING "${${MY_PROJECT_NAME}_VERSION_STRING}")

message(STATUS "Project ${${MY_PROJECT_NAME}_VERSION_STRING}")
# Set project info in the top-level CMake file
project(${MY_PROJECT_NAME} VERSION ${${MY_PROJECT_NAME}_VERSION_STRING}
            DESCRIPTION "NPTEL C++ - Prof. P. P. Das"
            HOMEPAGE_URL "https://nptel.ac.in/courses/106/105/106105151/"
            LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(BUILD_TESTING "Build on the test executable" OFF)
option(ENABLE_COVERAGE "Collect code coverage from test library" OFF)
option(DEBUG_MODE "Build with debugging messages" OFF)

# if this is the main project
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    # Primt the CMake's version
    message(STATUS "CMake ${CMAKE_VERSION}")

    # IMP: Do NOT set them for libraries
    # Specify the required C++ standard, globally, with NO extenstions (like, gnu++17)
    if(NOT DEFINED CMAKE_CXX_STANDARD)
        set(CMAKE_CXX_STANDARD 11)
    endif()

    if(NOT DEFINED CMAKE_CXX_STANDARD_REQUIRED)
        set(CMAKE_CXX_STANDARD_REQUIRED ON)
    endif()

    if(NOT DEFINED CMAKE_CXX_EXTENSIONS)
        set(CMAKE_CXX_EXTENSIONS OFF)
    endif()
endif()

add_subdirectory(src)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
    include(CTest)
    include(FetchContent)

    add_subdirectory(test)
else()
    add_subdirectory(app)
    add_executable(app_complex $<TARGET_OBJECTS:complex> $<TARGET_OBJECTS:main_complex>)
    add_executable(create_credit_card $<TARGET_OBJECTS:string> $<TARGET_OBJECTS:date> $<TARGET_OBJECTS:name> $<TARGET_OBJECTS:address> $<TARGET_OBJECTS:credit_card> $<TARGET_OBJECTS:main_create_credit_card>)
    add_executable(create_date $<TARGET_OBJECTS:date> $<TARGET_OBJECTS:main_create_date>)
    add_executable(create_rect $<TARGET_OBJECTS:point> $<TARGET_OBJECTS:rect> $<TARGET_OBJECTS:main_create_rect>)
    add_executable(create_string $<TARGET_OBJECTS:string> $<TARGET_OBJECTS:main_create_string>)
    add_executable(reverse_string $<TARGET_OBJECTS:stack> $<TARGET_OBJECTS:main_reverse_string>)
endif()
