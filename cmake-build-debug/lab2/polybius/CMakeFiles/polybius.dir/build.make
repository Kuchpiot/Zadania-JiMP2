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
CMAKE_COMMAND = /usr/local/clion-2016.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /usr/local/clion-2016.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/students/z/zabldomi/JIMP2/lab1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug

# Include any dependencies generated for this target.
include lab2/polybius/CMakeFiles/polybius.dir/depend.make

# Include the progress variables for this target.
include lab2/polybius/CMakeFiles/polybius.dir/progress.make

# Include the compile flags for this target's objects.
include lab2/polybius/CMakeFiles/polybius.dir/flags.make

lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o: lab2/polybius/CMakeFiles/polybius.dir/flags.make
lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o: ../lab2/polybius/Polybius.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o"
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/polybius.dir/Polybius.cpp.o -c /home/students/z/zabldomi/JIMP2/lab1/lab2/polybius/Polybius.cpp

lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/polybius.dir/Polybius.cpp.i"
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/students/z/zabldomi/JIMP2/lab1/lab2/polybius/Polybius.cpp > CMakeFiles/polybius.dir/Polybius.cpp.i

lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/polybius.dir/Polybius.cpp.s"
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/students/z/zabldomi/JIMP2/lab1/lab2/polybius/Polybius.cpp -o CMakeFiles/polybius.dir/Polybius.cpp.s

lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.requires:

.PHONY : lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.requires

lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.provides: lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.requires
	$(MAKE) -f lab2/polybius/CMakeFiles/polybius.dir/build.make lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.provides.build
.PHONY : lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.provides

lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.provides.build: lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o


lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o: lab2/polybius/CMakeFiles/polybius.dir/flags.make
lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o: ../lab2/polybius/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o"
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/polybius.dir/main.cpp.o -c /home/students/z/zabldomi/JIMP2/lab1/lab2/polybius/main.cpp

lab2/polybius/CMakeFiles/polybius.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/polybius.dir/main.cpp.i"
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/students/z/zabldomi/JIMP2/lab1/lab2/polybius/main.cpp > CMakeFiles/polybius.dir/main.cpp.i

lab2/polybius/CMakeFiles/polybius.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/polybius.dir/main.cpp.s"
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/students/z/zabldomi/JIMP2/lab1/lab2/polybius/main.cpp -o CMakeFiles/polybius.dir/main.cpp.s

lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.requires:

.PHONY : lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.requires

lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.provides: lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.requires
	$(MAKE) -f lab2/polybius/CMakeFiles/polybius.dir/build.make lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.provides.build
.PHONY : lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.provides

lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.provides.build: lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o


# Object files for target polybius
polybius_OBJECTS = \
"CMakeFiles/polybius.dir/Polybius.cpp.o" \
"CMakeFiles/polybius.dir/main.cpp.o"

# External object files for target polybius
polybius_EXTERNAL_OBJECTS =

lab2/polybius/polybius: lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o
lab2/polybius/polybius: lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o
lab2/polybius/polybius: lab2/polybius/CMakeFiles/polybius.dir/build.make
lab2/polybius/polybius: lab2/polybius/liblibpolybius.a
lab2/polybius/polybius: lab2/polybius/CMakeFiles/polybius.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable polybius"
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/polybius.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lab2/polybius/CMakeFiles/polybius.dir/build: lab2/polybius/polybius

.PHONY : lab2/polybius/CMakeFiles/polybius.dir/build

lab2/polybius/CMakeFiles/polybius.dir/requires: lab2/polybius/CMakeFiles/polybius.dir/Polybius.cpp.o.requires
lab2/polybius/CMakeFiles/polybius.dir/requires: lab2/polybius/CMakeFiles/polybius.dir/main.cpp.o.requires

.PHONY : lab2/polybius/CMakeFiles/polybius.dir/requires

lab2/polybius/CMakeFiles/polybius.dir/clean:
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius && $(CMAKE_COMMAND) -P CMakeFiles/polybius.dir/cmake_clean.cmake
.PHONY : lab2/polybius/CMakeFiles/polybius.dir/clean

lab2/polybius/CMakeFiles/polybius.dir/depend:
	cd /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/students/z/zabldomi/JIMP2/lab1 /home/students/z/zabldomi/JIMP2/lab1/lab2/polybius /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius /home/students/z/zabldomi/JIMP2/lab1/cmake-build-debug/lab2/polybius/CMakeFiles/polybius.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lab2/polybius/CMakeFiles/polybius.dir/depend

