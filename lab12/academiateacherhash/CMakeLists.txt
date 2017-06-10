
project(teacher)

set(HEDEAR_FILES TeacherHash.h)
set(SOURCE_FILES TeacherHash.cpp)

add_library(libteacherhash STATIC ${SOURCE_FILES})
target_include_directories(libteacherhash PUBLIC .)

add_executable(teacher ${SOURCE_FILES} main.cpp)

target_link_libraries(teacher libteacherhash)