# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /home/carricossauro/Documents/clion-2019.3.3/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/carricossauro/Documents/clion-2019.3.3/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LAFT1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LAFT1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LAFT1.dir/flags.make

CMakeFiles/LAFT1.dir/main.c.o: CMakeFiles/LAFT1.dir/flags.make
CMakeFiles/LAFT1.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LAFT1.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LAFT1.dir/main.c.o   -c "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/main.c"

CMakeFiles/LAFT1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LAFT1.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/main.c" > CMakeFiles/LAFT1.dir/main.c.i

CMakeFiles/LAFT1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LAFT1.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/main.c" -o CMakeFiles/LAFT1.dir/main.c.s

# Object files for target LAFT1
LAFT1_OBJECTS = \
"CMakeFiles/LAFT1.dir/main.c.o"

# External object files for target LAFT1
LAFT1_EXTERNAL_OBJECTS =

LAFT1: CMakeFiles/LAFT1.dir/main.c.o
LAFT1: CMakeFiles/LAFT1.dir/build.make
LAFT1: CMakeFiles/LAFT1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable LAFT1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LAFT1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LAFT1.dir/build: LAFT1

.PHONY : CMakeFiles/LAFT1.dir/build

CMakeFiles/LAFT1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LAFT1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LAFT1.dir/clean

CMakeFiles/LAFT1.dir/depend:
	cd "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/cmake-build-debug" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/cmake-build-debug" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/PI_aula1/cmake-build-debug/CMakeFiles/LAFT1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LAFT1.dir/depend

