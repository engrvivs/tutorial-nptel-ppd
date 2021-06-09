set(TARGET_ADDRESS "address")
set(TARGET_CREDIT_CARD "credit_card")
set(TARGET_COMPLEX "complex")
set(TARGET_DATE "date")
set(TARGET_NAME "name")
set(TARGET_POINT "point")
set(TARGET_RECT "rect")
set(TARGET_STACK "stack")
set(TARGET_STRING "string")

add_library(${TARGET_ADDRESS} OBJECT Address.cxx)
target_include_directories(${TARGET_ADDRESS} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_CREDIT_CARD} OBJECT CreditCard.cxx)
target_include_directories(${TARGET_CREDIT_CARD} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_COMPLEX} OBJECT Complex.cxx)
target_include_directories(${TARGET_COMPLEX} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_DATE} OBJECT Date.cxx)
target_include_directories(${TARGET_DATE} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_NAME} OBJECT Name.cxx)
target_include_directories(${TARGET_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_POINT} OBJECT Point.cxx)
target_include_directories(${TARGET_POINT} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_RECT} OBJECT Rect.cxx)
target_include_directories(${TARGET_RECT} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_STACK} OBJECT Stack.cxx)
target_include_directories(${TARGET_STACK} PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_library(${TARGET_STRING} OBJECT String.cxx)
target_include_directories(${TARGET_STRING} PRIVATE ${PROJECT_SOURCE_DIR}/include)

if(BUILD_TESTING AND ENABLE_COVERAGE)
    target_compile_options(${TARGET_STACK} BEFORE PRIVATE --coverage PRIVATE -O0)
    target_compile_options(${TARGET_STRING} BEFORE PRIVATE --coverage PRIVATE -O0)
    target_compile_options(${TARGET_COMPLEX} BEFORE PRIVATE --coverage PRIVATE -O0)
elseif(DEBUG_MODE)
    target_compile_options(${TARGET_ADDRESS} PRIVATE -DDEBUG)
    target_compile_options(${TARGET_COMPLEX} PRIVATE -DDEBUG)
    target_compile_options(${TARGET_CREDIT_CARD} PRIVATE -DDEBUG)
    target_compile_options(${TARGET_DATE} PRIVATE -DDEBUG)
    target_compile_options(${TARGET_NAME} PRIVATE -DDEBUG)
    target_compile_options(${TARGET_POINT} PRIVATE -DDEBUG)
    target_compile_options(${TARGET_RECT} PRIVATE -DDEBUG)
    target_compile_options(${TARGET_STRING} PRIVATE -DDEBUG)
endif()
