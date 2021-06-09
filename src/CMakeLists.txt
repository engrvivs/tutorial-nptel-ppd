set(TARGET_STACK "stack")
set(TARGET_STRING "string")
set(TARGET_COMPLEX "complex")

add_library(${TARGET_STACK} OBJECT Stack.cxx)
target_include_directories(${TARGET_STACK} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_STRING} OBJECT String.cxx)
target_include_directories(${TARGET_STRING} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_COMPLEX} OBJECT Complex.cxx)
target_include_directories(${TARGET_COMPLEX} PRIVATE ${PROJECT_SOURCE_DIR}/include)

if(BUILD_TESTING AND ENABLE_COVERAGE)
    target_compile_options(${TARGET_STACK} BEFORE PRIVATE --coverage PRIVATE -O0)
    target_compile_options(${TARGET_STRING} BEFORE PRIVATE --coverage PRIVATE -O0)
    target_compile_options(${TARGET_COMPLEX} BEFORE PRIVATE --coverage PRIVATE -O0)
elseif(DEBUG_MODE)
    target_compile_options(${TARGET_STRING} PRIVATE -DDEBUG)
endif()
