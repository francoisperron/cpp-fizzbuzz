project(src)

set(HEADER_FILES Fizzbuzz.h)
set(SOURCE_FILES Fizzbuzz.cpp)

add_library(src STATIC ${SOURCE_FILES} ${HEADER_FILES})