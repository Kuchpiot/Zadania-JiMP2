
project(lab8)

set(HEDEAR_FILES Lab8.h)
set(SOURCE_FILES Lab8.cpp)

add_library(liblab8 STATIC ${SOURCE_FILES})
target_include_directories(liblab8 PUBLIC .)

add_executable(lab8 ${SOURCE_FILES} main.cpp)

target_link_libraries(lab8 liblab8)