# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /snap/cmake/1366/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1366/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/marat/BMSTU/C-labs

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/marat/BMSTU/build-C-labs-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/C-labs.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/C-labs.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/C-labs.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C-labs.dir/flags.make

CMakeFiles/C-labs.dir/main.c.o: CMakeFiles/C-labs.dir/flags.make
CMakeFiles/C-labs.dir/main.c.o: /home/marat/BMSTU/C-labs/main.c
CMakeFiles/C-labs.dir/main.c.o: CMakeFiles/C-labs.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/marat/BMSTU/build-C-labs-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C-labs.dir/main.c.o"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/C-labs.dir/main.c.o -MF CMakeFiles/C-labs.dir/main.c.o.d -o CMakeFiles/C-labs.dir/main.c.o -c /home/marat/BMSTU/C-labs/main.c

CMakeFiles/C-labs.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/C-labs.dir/main.c.i"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/marat/BMSTU/C-labs/main.c > CMakeFiles/C-labs.dir/main.c.i

CMakeFiles/C-labs.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/C-labs.dir/main.c.s"
	/usr/bin/gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/marat/BMSTU/C-labs/main.c -o CMakeFiles/C-labs.dir/main.c.s

# Object files for target C-labs
C__labs_OBJECTS = \
"CMakeFiles/C-labs.dir/main.c.o"

# External object files for target C-labs
C__labs_EXTERNAL_OBJECTS =

C-labs: CMakeFiles/C-labs.dir/main.c.o
C-labs: CMakeFiles/C-labs.dir/build.make
C-labs: CMakeFiles/C-labs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/marat/BMSTU/build-C-labs-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C-labs"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C-labs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C-labs.dir/build: C-labs
.PHONY : CMakeFiles/C-labs.dir/build

CMakeFiles/C-labs.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C-labs.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C-labs.dir/clean

CMakeFiles/C-labs.dir/depend:
	cd /home/marat/BMSTU/build-C-labs-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/marat/BMSTU/C-labs /home/marat/BMSTU/C-labs /home/marat/BMSTU/build-C-labs-Desktop-Debug /home/marat/BMSTU/build-C-labs-Desktop-Debug /home/marat/BMSTU/build-C-labs-Desktop-Debug/CMakeFiles/C-labs.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/C-labs.dir/depend

