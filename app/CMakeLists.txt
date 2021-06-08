set(TARGET_MAIN_REVERSE_STRING "main_reverse_string")
add_library(${TARGET_MAIN_REVERSE_STRING} OBJECT reverse_string.cxx)
target_include_directories(${TARGET_MAIN_REVERSE_STRING} PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(TARGET_MAIN_COMPLEX "main_complex")
add_library(${TARGET_MAIN_COMPLEX} OBJECT complex.cxx)
target_include_directories(${TARGET_MAIN_COMPLEX} PRIVATE ${PROJECT_SOURCE_DIR}/include)
