
project(teacher)

set(HEDEAR_FILES Teacher.h)
set(SOURCE_FILES Teacher.cpp)
set(HEDEAR_FILES TeacherId.h)
set(SOURCE_FILES TeacherId.cpp)
set(HEDEAR_FILES TeacherHash.h)
set(SOURCE_FILES TeacherHash.cpp)

add_library(libteacher STATIC ${SOURCE_FILES})
target_include_directories(libteacher PUBLIC .)

add_executable(teacher ${SOURCE_FILES} main.cpp)

target_link_libraries(teacher libteacher)