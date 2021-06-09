set(TARGET_MAIN_COMPLEX "main_complex")
add_library(${TARGET_MAIN_COMPLEX} OBJECT complex.cxx)
target_include_directories(${TARGET_MAIN_COMPLEX} PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(TARGET_MAIN_CREATE_CREDIT_CARD "main_create_credit_card")
add_library(${TARGET_MAIN_CREATE_CREDIT_CARD} OBJECT create_credit_card.cxx)
target_include_directories(${TARGET_MAIN_CREATE_CREDIT_CARD} PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(TARGET_MAIN_CREATE_DATE "main_create_date")
add_library(${TARGET_MAIN_CREATE_DATE} OBJECT create_date.cxx)
target_include_directories(${TARGET_MAIN_CREATE_DATE} PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(TARGET_MAIN_CREATE_RECT "main_create_rect")
add_library(${TARGET_MAIN_CREATE_RECT} OBJECT create_rect.cxx)
target_include_directories(${TARGET_MAIN_CREATE_RECT} PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(TARGET_MAIN_CREATE_STRING "main_create_string")
add_library(${TARGET_MAIN_CREATE_STRING} OBJECT create_string.cxx)
target_include_directories(${TARGET_MAIN_CREATE_STRING} PRIVATE ${PROJECT_SOURCE_DIR}/include)

set(TARGET_MAIN_REVERSE_STRING "main_reverse_string")
add_library(${TARGET_MAIN_REVERSE_STRING} OBJECT reverse_string.cxx)
target_include_directories(${TARGET_MAIN_REVERSE_STRING} PRIVATE ${PROJECT_SOURCE_DIR}/include)

