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
CMAKE_SOURCE_DIR = /Users/fed0rus/Documents/University/F20/OS/Labs/week05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fed0rus/Documents/University/F20/OS/Labs/week05/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/week05.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/week05.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/week05.dir/flags.make

CMakeFiles/week05.dir/ex3.c.o: CMakeFiles/week05.dir/flags.make
CMakeFiles/week05.dir/ex3.c.o: ../ex3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fed0rus/Documents/University/F20/OS/Labs/week05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/week05.dir/ex3.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/week05.dir/ex3.c.o   -c /Users/fed0rus/Documents/University/F20/OS/Labs/week05/ex3.c

CMakeFiles/week05.dir/ex3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/week05.dir/ex3.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/fed0rus/Documents/University/F20/OS/Labs/week05/ex3.c > CMakeFiles/week05.dir/ex3.c.i

CMakeFiles/week05.dir/ex3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/week05.dir/ex3.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/fed0rus/Documents/University/F20/OS/Labs/week05/ex3.c -o CMakeFiles/week05.dir/ex3.c.s

# Object files for target week05
week05_OBJECTS = \
"CMakeFiles/week05.dir/ex3.c.o"

# External object files for target week05
week05_EXTERNAL_OBJECTS =

week05: CMakeFiles/week05.dir/ex3.c.o
week05: CMakeFiles/week05.dir/build.make
week05: CMakeFiles/week05.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fed0rus/Documents/University/F20/OS/Labs/week05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable week05"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/week05.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/week05.dir/build: week05

.PHONY : CMakeFiles/week05.dir/build

CMakeFiles/week05.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/week05.dir/cmake_clean.cmake
.PHONY : CMakeFiles/week05.dir/clean

CMakeFiles/week05.dir/depend:
	cd /Users/fed0rus/Documents/University/F20/OS/Labs/week05/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fed0rus/Documents/University/F20/OS/Labs/week05 /Users/fed0rus/Documents/University/F20/OS/Labs/week05 /Users/fed0rus/Documents/University/F20/OS/Labs/week05/cmake-build-debug /Users/fed0rus/Documents/University/F20/OS/Labs/week05/cmake-build-debug /Users/fed0rus/Documents/University/F20/OS/Labs/week05/cmake-build-debug/CMakeFiles/week05.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/week05.dir/depend

