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
include CMakeFiles/pointer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointer.dir/flags.make

CMakeFiles/pointer.dir/day7/pointer.c.o: CMakeFiles/pointer.dir/flags.make
CMakeFiles/pointer.dir/day7/pointer.c.o: ../day7/pointer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ousan/Desktop/LEARN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pointer.dir/day7/pointer.c.o"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/pointer.dir/day7/pointer.c.o   -c /Users/ousan/Desktop/LEARN/day7/pointer.c

CMakeFiles/pointer.dir/day7/pointer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pointer.dir/day7/pointer.c.i"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ousan/Desktop/LEARN/day7/pointer.c > CMakeFiles/pointer.dir/day7/pointer.c.i

CMakeFiles/pointer.dir/day7/pointer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pointer.dir/day7/pointer.c.s"
	/Library/Developer/CommandLineTools/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ousan/Desktop/LEARN/day7/pointer.c -o CMakeFiles/pointer.dir/day7/pointer.c.s

# Object files for target pointer
pointer_OBJECTS = \
"CMakeFiles/pointer.dir/day7/pointer.c.o"

# External object files for target pointer
pointer_EXTERNAL_OBJECTS =

pointer: CMakeFiles/pointer.dir/day7/pointer.c.o
pointer: CMakeFiles/pointer.dir/build.make
pointer: CMakeFiles/pointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ousan/Desktop/LEARN/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pointer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pointer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointer.dir/build: pointer

.PHONY : CMakeFiles/pointer.dir/build

CMakeFiles/pointer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pointer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pointer.dir/clean

CMakeFiles/pointer.dir/depend:
	cd /Users/ousan/Desktop/LEARN/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ousan/Desktop/LEARN /Users/ousan/Desktop/LEARN /Users/ousan/Desktop/LEARN/cmake-build-debug /Users/ousan/Desktop/LEARN/cmake-build-debug /Users/ousan/Desktop/LEARN/cmake-build-debug/CMakeFiles/pointer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointer.dir/depend

