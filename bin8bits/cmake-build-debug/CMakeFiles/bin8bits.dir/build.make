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
CMAKE_SOURCE_DIR = "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/bin8bits.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bin8bits.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bin8bits.dir/flags.make

CMakeFiles/bin8bits.dir/main.c.o: CMakeFiles/bin8bits.dir/flags.make
CMakeFiles/bin8bits.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bin8bits.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bin8bits.dir/main.c.o   -c "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/main.c"

CMakeFiles/bin8bits.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bin8bits.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/main.c" > CMakeFiles/bin8bits.dir/main.c.i

CMakeFiles/bin8bits.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bin8bits.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/main.c" -o CMakeFiles/bin8bits.dir/main.c.s

# Object files for target bin8bits
bin8bits_OBJECTS = \
"CMakeFiles/bin8bits.dir/main.c.o"

# External object files for target bin8bits
bin8bits_EXTERNAL_OBJECTS =

bin8bits: CMakeFiles/bin8bits.dir/main.c.o
bin8bits: CMakeFiles/bin8bits.dir/build.make
bin8bits: CMakeFiles/bin8bits.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable bin8bits"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bin8bits.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bin8bits.dir/build: bin8bits

.PHONY : CMakeFiles/bin8bits.dir/build

CMakeFiles/bin8bits.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bin8bits.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bin8bits.dir/clean

CMakeFiles/bin8bits.dir/depend:
	cd "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/cmake-build-debug" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/cmake-build-debug" "/home/carricossauro/Desktop/LCC 1ºano 2ºsemestre/C/bin8bits/cmake-build-debug/CMakeFiles/bin8bits.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/bin8bits.dir/depend

