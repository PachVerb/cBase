# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ousan/Desktop/LEARN

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ousan/Desktop/LEARN/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/array.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/array.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/array.dir/flags.make

CMakeFiles/array.dir/day5/array.c.o: CMakeFiles/array.dir/flags.make
CMakeFiles/array.dir/day5/array.c.o: ../day5/array.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ousan/Desktop/LEARN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/array.dir/day5/array.c.o"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/array.dir/day5/array.c.o   -c /Users/ousan/Desktop/LEARN/day5/array.c

CMakeFiles/array.dir/day5/array.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/array.dir/day5/array.c.i"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ousan/Desktop/LEARN/day5/array.c > CMakeFiles/array.dir/day5/array.c.i

CMakeFiles/array.dir/day5/array.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/array.dir/day5/array.c.s"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ousan/Desktop/LEARN/day5/array.c -o CMakeFiles/array.dir/day5/array.c.s

# Object files for target array
array_OBJECTS = \
"CMakeFiles/array.dir/day5/array.c.o"

# External object files for target array
array_EXTERNAL_OBJECTS =

array: CMakeFiles/array.dir/day5/array.c.o
array: CMakeFiles/array.dir/build.make
array: CMakeFiles/array.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ousan/Desktop/LEARN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable array"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/array.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/array.dir/build: array

.PHONY : CMakeFiles/array.dir/build

CMakeFiles/array.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/array.dir/cmake_clean.cmake
.PHONY : CMakeFiles/array.dir/clean

CMakeFiles/array.dir/depend:
	cd /Users/ousan/Desktop/LEARN/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ousan/Desktop/LEARN /Users/ousan/Desktop/LEARN /Users/ousan/Desktop/LEARN/cmake-build-debug /Users/ousan/Desktop/LEARN/cmake-build-debug /Users/ousan/Desktop/LEARN/cmake-build-debug/CMakeFiles/array.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/array.dir/depend

