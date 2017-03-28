
project(mars)

set(HEDEAR_FILES Mars.h)
set(SOURCE_FILES Mars.cpp)

add_library(libmars STATIC ${SOURCE_FILES})
target_include_directories(libmars PUBLIC .)

add_executable(mars ${SOURCE_FILES} main.cpp)

target_link_libraries(mars libmars)

