set(TARGET_MAIN "main")
add_library(${TARGET_MAIN} OBJECT main.cxx)
target_include_directories(${TARGET_MAIN} PRIVATE ${PROJECT_SOURCE_DIR}/include)
