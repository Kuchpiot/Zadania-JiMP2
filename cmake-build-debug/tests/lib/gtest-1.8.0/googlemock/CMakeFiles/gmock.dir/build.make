# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/piotr/IDE/CLion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/piotr/IDE/CLion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/piotr/Uczelnia/JiMP2/exercises

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug

# Include any dependencies generated for this target.
include tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/depend.make

# Include the progress variables for this target.
include tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/flags.make

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/flags.make
tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o: ../tests/lib/gtest-1.8.0/googletest/src/gtest-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o"
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o -c /home/piotr/Uczelnia/JiMP2/exercises/tests/lib/gtest-1.8.0/googletest/src/gtest-all.cc

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.i"
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/piotr/Uczelnia/JiMP2/exercises/tests/lib/gtest-1.8.0/googletest/src/gtest-all.cc > CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.i

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.s"
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/piotr/Uczelnia/JiMP2/exercises/tests/lib/gtest-1.8.0/googletest/src/gtest-all.cc -o CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.s

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires:

.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires
	$(MAKE) -f tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/build.make tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides.build
.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.provides.build: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o


tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/flags.make
tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: ../tests/lib/gtest-1.8.0/googlemock/src/gmock-all.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o"
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock.dir/src/gmock-all.cc.o -c /home/piotr/Uczelnia/JiMP2/exercises/tests/lib/gtest-1.8.0/googlemock/src/gmock-all.cc

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/piotr/Uczelnia/JiMP2/exercises/tests/lib/gtest-1.8.0/googlemock/src/gmock-all.cc > CMakeFiles/gmock.dir/src/gmock-all.cc.i

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/piotr/Uczelnia/JiMP2/exercises/tests/lib/gtest-1.8.0/googlemock/src/gmock-all.cc -o CMakeFiles/gmock.dir/src/gmock-all.cc.s

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires:

.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires
	$(MAKE) -f tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/build.make tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides.build
.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.provides.build: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o


# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o" \
"CMakeFiles/gmock.dir/src/gmock-all.cc.o"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

tests/lib/gtest-1.8.0/googlemock/libgmock.a: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o
tests/lib/gtest-1.8.0/googlemock/libgmock.a: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
tests/lib/gtest-1.8.0/googlemock/libgmock.a: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/build.make
tests/lib/gtest-1.8.0/googlemock/libgmock.a: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library libgmock.a"
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean_target.cmake
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/build: tests/lib/gtest-1.8.0/googlemock/libgmock.a

.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/build

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/requires: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/__/googletest/src/gtest-all.cc.o.requires
tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/requires: tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o.requires

.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/requires

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/clean:
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean.cmake
.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/clean

tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/depend:
	cd /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/piotr/Uczelnia/JiMP2/exercises /home/piotr/Uczelnia/JiMP2/exercises/tests/lib/gtest-1.8.0/googlemock /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock /home/piotr/Uczelnia/JiMP2/exercises/cmake-build-debug/tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/lib/gtest-1.8.0/googlemock/CMakeFiles/gmock.dir/depend

