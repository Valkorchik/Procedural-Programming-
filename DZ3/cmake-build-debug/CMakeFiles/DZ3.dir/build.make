# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/Никита/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Никита/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DZ3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/DZ3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DZ3.dir/flags.make

CMakeFiles/DZ3.dir/Dz3.cpp.o: CMakeFiles/DZ3.dir/flags.make
CMakeFiles/DZ3.dir/Dz3.cpp.o: ../Dz3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DZ3.dir/Dz3.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DZ3.dir/Dz3.cpp.o -c /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/Dz3.cpp

CMakeFiles/DZ3.dir/Dz3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DZ3.dir/Dz3.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/Dz3.cpp > CMakeFiles/DZ3.dir/Dz3.cpp.i

CMakeFiles/DZ3.dir/Dz3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DZ3.dir/Dz3.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/Dz3.cpp -o CMakeFiles/DZ3.dir/Dz3.cpp.s

# Object files for target DZ3
DZ3_OBJECTS = \
"CMakeFiles/DZ3.dir/Dz3.cpp.o"

# External object files for target DZ3
DZ3_EXTERNAL_OBJECTS =

DZ3.exe: CMakeFiles/DZ3.dir/Dz3.cpp.o
DZ3.exe: CMakeFiles/DZ3.dir/build.make
DZ3.exe: CMakeFiles/DZ3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DZ3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DZ3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DZ3.dir/build: DZ3.exe
.PHONY : CMakeFiles/DZ3.dir/build

CMakeFiles/DZ3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DZ3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DZ3.dir/clean

CMakeFiles/DZ3.dir/depend:
	cd /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3 /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3 /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/cmake-build-debug /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/cmake-build-debug /cygdrive/e/Work/GitHub/Procedural-Programming-/DZ3/cmake-build-debug/CMakeFiles/DZ3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DZ3.dir/depend

