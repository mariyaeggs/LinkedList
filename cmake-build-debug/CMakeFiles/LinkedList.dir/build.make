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
include CMakeFiles/LinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkedList.dir/flags.make

CMakeFiles/LinkedList.dir/NPosition.cpp.o: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/NPosition.cpp.o: ../NPosition.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/student/Desktop/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinkedList.dir/NPosition.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkedList.dir/NPosition.cpp.o -c /Users/student/Desktop/LinkedList/NPosition.cpp

CMakeFiles/LinkedList.dir/NPosition.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/NPosition.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/student/Desktop/LinkedList/NPosition.cpp > CMakeFiles/LinkedList.dir/NPosition.cpp.i

CMakeFiles/LinkedList.dir/NPosition.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/NPosition.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/student/Desktop/LinkedList/NPosition.cpp -o CMakeFiles/LinkedList.dir/NPosition.cpp.s

CMakeFiles/LinkedList.dir/NPosition.cpp.o.requires:

.PHONY : CMakeFiles/LinkedList.dir/NPosition.cpp.o.requires

CMakeFiles/LinkedList.dir/NPosition.cpp.o.provides: CMakeFiles/LinkedList.dir/NPosition.cpp.o.requires
	$(MAKE) -f CMakeFiles/LinkedList.dir/build.make CMakeFiles/LinkedList.dir/NPosition.cpp.o.provides.build
.PHONY : CMakeFiles/LinkedList.dir/NPosition.cpp.o.provides

CMakeFiles/LinkedList.dir/NPosition.cpp.o.provides.build: CMakeFiles/LinkedList.dir/NPosition.cpp.o


# Object files for target LinkedList
LinkedList_OBJECTS = \
"CMakeFiles/LinkedList.dir/NPosition.cpp.o"

# External object files for target LinkedList
LinkedList_EXTERNAL_OBJECTS =

LinkedList: CMakeFiles/LinkedList.dir/NPosition.cpp.o
LinkedList: CMakeFiles/LinkedList.dir/build.make
LinkedList: CMakeFiles/LinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/student/Desktop/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkedList.dir/build: LinkedList

.PHONY : CMakeFiles/LinkedList.dir/build

CMakeFiles/LinkedList.dir/requires: CMakeFiles/LinkedList.dir/NPosition.cpp.o.requires

.PHONY : CMakeFiles/LinkedList.dir/requires

CMakeFiles/LinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkedList.dir/clean

CMakeFiles/LinkedList.dir/depend:
	cd /Users/student/Desktop/LinkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/student/Desktop/LinkedList /Users/student/Desktop/LinkedList /Users/student/Desktop/LinkedList/cmake-build-debug /Users/student/Desktop/LinkedList/cmake-build-debug /Users/student/Desktop/LinkedList/cmake-build-debug/CMakeFiles/LinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkedList.dir/depend

