set(HEADER_FILES
        include/account/account.h)

set(SOURCE_FILES
        src/account.cpp)

add_library(account STATIC ${SOURCE_FILES})

target_include_directories(account PRIVATE include/account)
target_include_directories(account PUBLIC include)
