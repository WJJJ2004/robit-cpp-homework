# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lwj/assignment_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lwj/assignment_1/build

# Include any dependencies generated for this target.
include CMakeFiles/assignment_1.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/assignment_1.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/assignment_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/assignment_1.dir/flags.make

CMakeFiles/assignment_1.dir/main.cpp.o: CMakeFiles/assignment_1.dir/flags.make
CMakeFiles/assignment_1.dir/main.cpp.o: ../main.cpp
CMakeFiles/assignment_1.dir/main.cpp.o: CMakeFiles/assignment_1.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lwj/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/assignment_1.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/assignment_1.dir/main.cpp.o -MF CMakeFiles/assignment_1.dir/main.cpp.o.d -o CMakeFiles/assignment_1.dir/main.cpp.o -c /home/lwj/assignment_1/main.cpp

CMakeFiles/assignment_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/assignment_1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lwj/assignment_1/main.cpp > CMakeFiles/assignment_1.dir/main.cpp.i

CMakeFiles/assignment_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/assignment_1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lwj/assignment_1/main.cpp -o CMakeFiles/assignment_1.dir/main.cpp.s

# Object files for target assignment_1
assignment_1_OBJECTS = \
"CMakeFiles/assignment_1.dir/main.cpp.o"

# External object files for target assignment_1
assignment_1_EXTERNAL_OBJECTS =

assignment_1: CMakeFiles/assignment_1.dir/main.cpp.o
assignment_1: CMakeFiles/assignment_1.dir/build.make
assignment_1: CMakeFiles/assignment_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lwj/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable assignment_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/assignment_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/assignment_1.dir/build: assignment_1
.PHONY : CMakeFiles/assignment_1.dir/build

CMakeFiles/assignment_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/assignment_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/assignment_1.dir/clean

CMakeFiles/assignment_1.dir/depend:
	cd /home/lwj/assignment_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lwj/assignment_1 /home/lwj/assignment_1 /home/lwj/assignment_1/build /home/lwj/assignment_1/build /home/lwj/assignment_1/build/CMakeFiles/assignment_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/assignment_1.dir/depend

