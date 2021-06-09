# Testing library
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v2.13.1
)

# CMake 3.14+: Populate content and possibly add it to main build
# CMake target, defined by Catch2, are available to the build
FetchContent_MakeAvailable(Catch2)

set(TARGET_TEST_STACK "test_stack")
add_library(${TARGET_TEST_STACK} OBJECT Stack.cxx)
target_include_directories(${TARGET_TEST_STACK} PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${TARGET_TEST_STACK} PRIVATE Catch2::Catch2)

set(TARGET_TEST_STRING "test_string")
add_library(${TARGET_TEST_STRING} OBJECT String.cxx)
target_include_directories(${TARGET_TEST_STRING} PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${TARGET_TEST_STRING} PRIVATE Catch2::Catch2)

set(TARGET_TEST_COMPLEX "test_complex")
add_library(${TARGET_TEST_COMPLEX} OBJECT Complex.cxx)
target_include_directories(${TARGET_TEST_COMPLEX} PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(${TARGET_TEST_COMPLEX} PRIVATE Catch2::Catch2)

set(TARGET_TEST_MAIN "test_main")
add_library(${TARGET_TEST_MAIN} OBJECT main.cxx)
target_link_libraries(${TARGET_TEST_MAIN} PRIVATE Catch2::Catch2)

# Tests need to be added as executable
set(TARGET_TESTS "tests")
add_executable(${TARGET_TESTS})
if(ENABLE_COVERAGE)
    target_compile_options(${TARGET_TESTS} BEFORE PRIVATE --coverage)
    target_link_libraries(${TARGET_TESTS} PRIVATE --coverage)
endif()
target_link_libraries(${TARGET_TESTS} PRIVATE ${TARGET_TEST_MAIN} ${TARGET_TEST_STACK} $<TARGET_OBJECTS:stack> ${TARGET_TEST_COMPLEX} $<TARGET_OBJECTS:complex> ${TARGET_TEST_STRING} $<TARGET_OBJECTS:string>)

# Add Catch2 to CMake module path
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/contrib)
include(Catch)
catch_discover_tests(${TARGET_TESTS})
