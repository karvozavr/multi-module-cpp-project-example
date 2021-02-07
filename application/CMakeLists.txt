set(SOURCE_FILES
        src/main.cpp)

add_executable(bank-system ${SOURCE_FILES})

target_link_libraries(bank-system LINK_PRIVATE account)
