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
CMAKE_SOURCE_DIR = "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/binario.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/binario.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/binario.dir/flags.make

CMakeFiles/binario.dir/main.c.o: CMakeFiles/binario.dir/flags.make
CMakeFiles/binario.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/binario.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/binario.dir/main.c.o   -c "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/main.c"

CMakeFiles/binario.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/binario.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/main.c" > CMakeFiles/binario.dir/main.c.i

CMakeFiles/binario.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/binario.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/main.c" -o CMakeFiles/binario.dir/main.c.s

# Object files for target binario
binario_OBJECTS = \
"CMakeFiles/binario.dir/main.c.o"

# External object files for target binario
binario_EXTERNAL_OBJECTS =

binario: CMakeFiles/binario.dir/main.c.o
binario: CMakeFiles/binario.dir/build.make
binario: CMakeFiles/binario.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable binario"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/binario.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/binario.dir/build: binario

.PHONY : CMakeFiles/binario.dir/build

CMakeFiles/binario.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/binario.dir/cmake_clean.cmake
.PHONY : CMakeFiles/binario.dir/clean

CMakeFiles/binario.dir/depend:
	cd "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/cmake-build-debug" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/cmake-build-debug" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/binario/cmake-build-debug/CMakeFiles/binario.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/binario.dir/depend

