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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/student/Desktop/LinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/student/Desktop/LinkedList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DeletePosition.cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DeletePosition.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DeletePosition.cpp.dir/flags.make

CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o: CMakeFiles/DeletePosition.cpp.dir/flags.make
CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o: ../DeletePosition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/student/Desktop/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o -c /Users/student/Desktop/LinkedList/DeletePosition.cpp

CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/student/Desktop/LinkedList/DeletePosition.cpp > CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.i

CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/student/Desktop/LinkedList/DeletePosition.cpp -o CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.s

CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.requires:

.PHONY : CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.requires

CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.provides: CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.requires
	$(MAKE) -f CMakeFiles/DeletePosition.cpp.dir/build.make CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.provides.build
.PHONY : CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.provides

CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.provides.build: CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o


# Object files for target DeletePosition.cpp
DeletePosition_cpp_OBJECTS = \
"CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o"

# External object files for target DeletePosition.cpp
DeletePosition_cpp_EXTERNAL_OBJECTS =

DeletePosition.cpp: CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o
DeletePosition.cpp: CMakeFiles/DeletePosition.cpp.dir/build.make
DeletePosition.cpp: CMakeFiles/DeletePosition.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/student/Desktop/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DeletePosition.cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DeletePosition.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DeletePosition.cpp.dir/build: DeletePosition.cpp

.PHONY : CMakeFiles/DeletePosition.cpp.dir/build

CMakeFiles/DeletePosition.cpp.dir/requires: CMakeFiles/DeletePosition.cpp.dir/DeletePosition.cpp.o.requires

.PHONY : CMakeFiles/DeletePosition.cpp.dir/requires

CMakeFiles/DeletePosition.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DeletePosition.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DeletePosition.cpp.dir/clean

CMakeFiles/DeletePosition.cpp.dir/depend:
	cd /Users/student/Desktop/LinkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/student/Desktop/LinkedList /Users/student/Desktop/LinkedList /Users/student/Desktop/LinkedList/cmake-build-debug /Users/student/Desktop/LinkedList/cmake-build-debug /Users/student/Desktop/LinkedList/cmake-build-debug/CMakeFiles/DeletePosition.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DeletePosition.cpp.dir/depend
