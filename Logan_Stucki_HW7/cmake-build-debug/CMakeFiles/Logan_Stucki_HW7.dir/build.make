# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_SOURCE_DIR = /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Logan_Stucki_HW7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Logan_Stucki_HW7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Logan_Stucki_HW7.dir/flags.make

CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.o: CMakeFiles/Logan_Stucki_HW7.dir/flags.make
CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.o -c /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/main.cpp

CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/main.cpp > CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.i

CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/main.cpp -o CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.s

CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.o: CMakeFiles/Logan_Stucki_HW7.dir/flags.make
CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.o: ../City.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.o -c /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/City.cpp

CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/City.cpp > CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.i

CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/City.cpp -o CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.s

# Object files for target Logan_Stucki_HW7
Logan_Stucki_HW7_OBJECTS = \
"CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.o" \
"CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.o"

# External object files for target Logan_Stucki_HW7
Logan_Stucki_HW7_EXTERNAL_OBJECTS =

Logan_Stucki_HW7: CMakeFiles/Logan_Stucki_HW7.dir/main.cpp.o
Logan_Stucki_HW7: CMakeFiles/Logan_Stucki_HW7.dir/City.cpp.o
Logan_Stucki_HW7: CMakeFiles/Logan_Stucki_HW7.dir/build.make
Logan_Stucki_HW7: CMakeFiles/Logan_Stucki_HW7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Logan_Stucki_HW7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Logan_Stucki_HW7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Logan_Stucki_HW7.dir/build: Logan_Stucki_HW7

.PHONY : CMakeFiles/Logan_Stucki_HW7.dir/build

CMakeFiles/Logan_Stucki_HW7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Logan_Stucki_HW7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Logan_Stucki_HW7.dir/clean

CMakeFiles/Logan_Stucki_HW7.dir/depend:
	cd /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7 /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7 /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug /Users/stuckil/Desktop/Ignite/CPP/Logan_Stucki_HW7/cmake-build-debug/CMakeFiles/Logan_Stucki_HW7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Logan_Stucki_HW7.dir/depend

