# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Clion\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Code\CCode\AMS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Code\CCode\AMS\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AMS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/AMS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AMS.dir/flags.make

CMakeFiles/AMS.dir/main.cpp.obj: CMakeFiles/AMS.dir/flags.make
CMakeFiles/AMS.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Code\CCode\AMS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AMS.dir/main.cpp.obj"
	C:\TDM-GCC\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\AMS.dir\main.cpp.obj -c D:\Code\CCode\AMS\main.cpp

CMakeFiles/AMS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AMS.dir/main.cpp.i"
	C:\TDM-GCC\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Code\CCode\AMS\main.cpp > CMakeFiles\AMS.dir\main.cpp.i

CMakeFiles/AMS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AMS.dir/main.cpp.s"
	C:\TDM-GCC\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Code\CCode\AMS\main.cpp -o CMakeFiles\AMS.dir\main.cpp.s

# Object files for target AMS
AMS_OBJECTS = \
"CMakeFiles/AMS.dir/main.cpp.obj"

# External object files for target AMS
AMS_EXTERNAL_OBJECTS =

AMS.exe: CMakeFiles/AMS.dir/main.cpp.obj
AMS.exe: CMakeFiles/AMS.dir/build.make
AMS.exe: CMakeFiles/AMS.dir/linklibs.rsp
AMS.exe: CMakeFiles/AMS.dir/objects1.rsp
AMS.exe: CMakeFiles/AMS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Code\CCode\AMS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AMS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\AMS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AMS.dir/build: AMS.exe

.PHONY : CMakeFiles/AMS.dir/build

CMakeFiles/AMS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\AMS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/AMS.dir/clean

CMakeFiles/AMS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Code\CCode\AMS D:\Code\CCode\AMS D:\Code\CCode\AMS\cmake-build-debug D:\Code\CCode\AMS\cmake-build-debug D:\Code\CCode\AMS\cmake-build-debug\CMakeFiles\AMS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AMS.dir/depend
