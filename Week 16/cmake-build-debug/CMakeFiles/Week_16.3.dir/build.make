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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/samirlama/Desktop/College Work/SE/Week 16"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/samirlama/Desktop/College Work/SE/Week 16/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Week_16.3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Week_16.3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Week_16.3.dir/flags.make

CMakeFiles/Week_16.3.dir/ex3.cpp.o: CMakeFiles/Week_16.3.dir/flags.make
CMakeFiles/Week_16.3.dir/ex3.cpp.o: ../ex3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/samirlama/Desktop/College Work/SE/Week 16/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Week_16.3.dir/ex3.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Week_16.3.dir/ex3.cpp.o -c "/Users/samirlama/Desktop/College Work/SE/Week 16/ex3.cpp"

CMakeFiles/Week_16.3.dir/ex3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Week_16.3.dir/ex3.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/samirlama/Desktop/College Work/SE/Week 16/ex3.cpp" > CMakeFiles/Week_16.3.dir/ex3.cpp.i

CMakeFiles/Week_16.3.dir/ex3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Week_16.3.dir/ex3.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/samirlama/Desktop/College Work/SE/Week 16/ex3.cpp" -o CMakeFiles/Week_16.3.dir/ex3.cpp.s

# Object files for target Week_16.3
Week_16_3_OBJECTS = \
"CMakeFiles/Week_16.3.dir/ex3.cpp.o"

# External object files for target Week_16.3
Week_16_3_EXTERNAL_OBJECTS =

Week_16.3: CMakeFiles/Week_16.3.dir/ex3.cpp.o
Week_16.3: CMakeFiles/Week_16.3.dir/build.make
Week_16.3: CMakeFiles/Week_16.3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/samirlama/Desktop/College Work/SE/Week 16/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Week_16.3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Week_16.3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Week_16.3.dir/build: Week_16.3

.PHONY : CMakeFiles/Week_16.3.dir/build

CMakeFiles/Week_16.3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Week_16.3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Week_16.3.dir/clean

CMakeFiles/Week_16.3.dir/depend:
	cd "/Users/samirlama/Desktop/College Work/SE/Week 16/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/samirlama/Desktop/College Work/SE/Week 16" "/Users/samirlama/Desktop/College Work/SE/Week 16" "/Users/samirlama/Desktop/College Work/SE/Week 16/cmake-build-debug" "/Users/samirlama/Desktop/College Work/SE/Week 16/cmake-build-debug" "/Users/samirlama/Desktop/College Work/SE/Week 16/cmake-build-debug/CMakeFiles/Week_16.3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Week_16.3.dir/depend
