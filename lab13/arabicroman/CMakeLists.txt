
project(arabicromanconverter)

set(HEDEAR_FILES ArabicRomanConverter.h)
set(SOURCE_FILES ArabicRomanConverter.cpp)

add_library(libarabicromanconverter STATIC ${SOURCE_FILES})
target_include_directories(libarabicromanconverter PUBLIC .)

add_executable(arabicromanconverter ${SOURCE_FILES} main.cpp)

target_link_libraries(arabicromanconverter libarabicromanconverter)

