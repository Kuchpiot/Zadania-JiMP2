# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug

# Include any dependencies generated for this target.
include lab2/array2d/CMakeFiles/libarray2d.dir/depend.make

# Include the progress variables for this target.
include lab2/array2d/CMakeFiles/libarray2d.dir/progress.make

# Include the compile flags for this target's objects.
include lab2/array2d/CMakeFiles/libarray2d.dir/flags.make

lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o: lab2/array2d/CMakeFiles/libarray2d.dir/flags.make
lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o: ../lab2/array2d/Array2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o"
	cd /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/libarray2d.dir/Array2D.cpp.o -c /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/lab2/array2d/Array2D.cpp

lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libarray2d.dir/Array2D.cpp.i"
	cd /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/lab2/array2d/Array2D.cpp > CMakeFiles/libarray2d.dir/Array2D.cpp.i

lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libarray2d.dir/Array2D.cpp.s"
	cd /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/lab2/array2d/Array2D.cpp -o CMakeFiles/libarray2d.dir/Array2D.cpp.s

lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.requires:

.PHONY : lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.requires

lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.provides: lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.requires
	$(MAKE) -f lab2/array2d/CMakeFiles/libarray2d.dir/build.make lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.provides.build
.PHONY : lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.provides

lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.provides.build: lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o


# Object files for target libarray2d
libarray2d_OBJECTS = \
"CMakeFiles/libarray2d.dir/Array2D.cpp.o"

# External object files for target libarray2d
libarray2d_EXTERNAL_OBJECTS =

lab2/array2d/liblibarray2d.a: lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o
lab2/array2d/liblibarray2d.a: lab2/array2d/CMakeFiles/libarray2d.dir/build.make
lab2/array2d/liblibarray2d.a: lab2/array2d/CMakeFiles/libarray2d.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibarray2d.a"
	cd /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d && $(CMAKE_COMMAND) -P CMakeFiles/libarray2d.dir/cmake_clean_target.cmake
	cd /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libarray2d.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lab2/array2d/CMakeFiles/libarray2d.dir/build: lab2/array2d/liblibarray2d.a

.PHONY : lab2/array2d/CMakeFiles/libarray2d.dir/build

lab2/array2d/CMakeFiles/libarray2d.dir/requires: lab2/array2d/CMakeFiles/libarray2d.dir/Array2D.cpp.o.requires

.PHONY : lab2/array2d/CMakeFiles/libarray2d.dir/requires

lab2/array2d/CMakeFiles/libarray2d.dir/clean:
	cd /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d && $(CMAKE_COMMAND) -P CMakeFiles/libarray2d.dir/cmake_clean.cmake
.PHONY : lab2/array2d/CMakeFiles/libarray2d.dir/clean

lab2/array2d/CMakeFiles/libarray2d.dir/depend:
	cd /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1 /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/lab2/array2d /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d /home/piotr/Uczelnia/JiMP2/zadania/ratunku/Lab1/cmake-build-debug/lab2/array2d/CMakeFiles/libarray2d.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lab2/array2d/CMakeFiles/libarray2d.dir/depend

