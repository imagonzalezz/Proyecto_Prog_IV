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
CMAKE_SOURCE_DIR = /Users/ikeryanez/CLionProjects/ProyectoProgIV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Proyecto_Prog_IV.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Proyecto_Prog_IV.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Proyecto_Prog_IV.dir/flags.make

CMakeFiles/Proyecto_Prog_IV.dir/main.c.o: CMakeFiles/Proyecto_Prog_IV.dir/flags.make
CMakeFiles/Proyecto_Prog_IV.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Proyecto_Prog_IV.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Proyecto_Prog_IV.dir/main.c.o   -c /Users/ikeryanez/CLionProjects/ProyectoProgIV/main.c

CMakeFiles/Proyecto_Prog_IV.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Proyecto_Prog_IV.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ikeryanez/CLionProjects/ProyectoProgIV/main.c > CMakeFiles/Proyecto_Prog_IV.dir/main.c.i

CMakeFiles/Proyecto_Prog_IV.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Proyecto_Prog_IV.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ikeryanez/CLionProjects/ProyectoProgIV/main.c -o CMakeFiles/Proyecto_Prog_IV.dir/main.c.s

CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.o: CMakeFiles/Proyecto_Prog_IV.dir/flags.make
CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.o: ../funciones.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.o   -c /Users/ikeryanez/CLionProjects/ProyectoProgIV/funciones.c

CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/ikeryanez/CLionProjects/ProyectoProgIV/funciones.c > CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.i

CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/ikeryanez/CLionProjects/ProyectoProgIV/funciones.c -o CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.s

# Object files for target Proyecto_Prog_IV
Proyecto_Prog_IV_OBJECTS = \
"CMakeFiles/Proyecto_Prog_IV.dir/main.c.o" \
"CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.o"

# External object files for target Proyecto_Prog_IV
Proyecto_Prog_IV_EXTERNAL_OBJECTS =

Proyecto_Prog_IV: CMakeFiles/Proyecto_Prog_IV.dir/main.c.o
Proyecto_Prog_IV: CMakeFiles/Proyecto_Prog_IV.dir/funciones.c.o
Proyecto_Prog_IV: CMakeFiles/Proyecto_Prog_IV.dir/build.make
Proyecto_Prog_IV: CMakeFiles/Proyecto_Prog_IV.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Proyecto_Prog_IV"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Proyecto_Prog_IV.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Proyecto_Prog_IV.dir/build: Proyecto_Prog_IV

.PHONY : CMakeFiles/Proyecto_Prog_IV.dir/build

CMakeFiles/Proyecto_Prog_IV.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Proyecto_Prog_IV.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Proyecto_Prog_IV.dir/clean

CMakeFiles/Proyecto_Prog_IV.dir/depend:
	cd /Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ikeryanez/CLionProjects/ProyectoProgIV /Users/ikeryanez/CLionProjects/ProyectoProgIV /Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug /Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug /Users/ikeryanez/CLionProjects/ProyectoProgIV/cmake-build-debug/CMakeFiles/Proyecto_Prog_IV.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Proyecto_Prog_IV.dir/depend

