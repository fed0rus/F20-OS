# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = "/Users/fed0rus/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.6948.80/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/fed0rus/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/202.6948.80/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fed0rus/Documents/University/F20/OS/Labs/week07

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fed0rus/Documents/University/F20/OS/Labs/week07/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/week07.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/week07.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week07.dir/flags.make

CMakeFiles/week07.dir/ex5.c.o: CMakeFiles/week07.dir/flags.make
CMakeFiles/week07.dir/ex5.c.o: ../ex5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fed0rus/Documents/University/F20/OS/Labs/week07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/week07.dir/ex5.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/week07.dir/ex5.c.o   -c /Users/fed0rus/Documents/University/F20/OS/Labs/week07/ex5.c

CMakeFiles/week07.dir/ex5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/week07.dir/ex5.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fed0rus/Documents/University/F20/OS/Labs/week07/ex5.c > CMakeFiles/week07.dir/ex5.c.i

CMakeFiles/week07.dir/ex5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/week07.dir/ex5.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fed0rus/Documents/University/F20/OS/Labs/week07/ex5.c -o CMakeFiles/week07.dir/ex5.c.s

# Object files for target week07
week07_OBJECTS = \
"CMakeFiles/week07.dir/ex5.c.o"

# External object files for target week07
week07_EXTERNAL_OBJECTS =

week07: CMakeFiles/week07.dir/ex5.c.o
week07: CMakeFiles/week07.dir/build.make
week07: CMakeFiles/week07.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fed0rus/Documents/University/F20/OS/Labs/week07/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable week07"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week07.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week07.dir/build: week07

.PHONY : CMakeFiles/week07.dir/build

CMakeFiles/week07.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week07.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week07.dir/clean

CMakeFiles/week07.dir/depend:
	cd /Users/fed0rus/Documents/University/F20/OS/Labs/week07/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fed0rus/Documents/University/F20/OS/Labs/week07 /Users/fed0rus/Documents/University/F20/OS/Labs/week07 /Users/fed0rus/Documents/University/F20/OS/Labs/week07/cmake-build-debug /Users/fed0rus/Documents/University/F20/OS/Labs/week07/cmake-build-debug /Users/fed0rus/Documents/University/F20/OS/Labs/week07/cmake-build-debug/CMakeFiles/week07.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/week07.dir/depend

