# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jack/cpp-workspace/RKS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jack/cpp-workspace/RKS/build

# Include any dependencies generated for this target.
include CMakeFiles/RKS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/RKS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/RKS.dir/flags.make

CMakeFiles/RKS.dir/src/Engine.cpp.o: CMakeFiles/RKS.dir/flags.make
CMakeFiles/RKS.dir/src/Engine.cpp.o: ../src/Engine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/cpp-workspace/RKS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/RKS.dir/src/Engine.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RKS.dir/src/Engine.cpp.o -c /home/jack/cpp-workspace/RKS/src/Engine.cpp

CMakeFiles/RKS.dir/src/Engine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RKS.dir/src/Engine.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/cpp-workspace/RKS/src/Engine.cpp > CMakeFiles/RKS.dir/src/Engine.cpp.i

CMakeFiles/RKS.dir/src/Engine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RKS.dir/src/Engine.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/cpp-workspace/RKS/src/Engine.cpp -o CMakeFiles/RKS.dir/src/Engine.cpp.s

CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.o: CMakeFiles/RKS.dir/flags.make
CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.o: ../src/Scene/MainMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/cpp-workspace/RKS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.o -c /home/jack/cpp-workspace/RKS/src/Scene/MainMenu.cpp

CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/cpp-workspace/RKS/src/Scene/MainMenu.cpp > CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.i

CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/cpp-workspace/RKS/src/Scene/MainMenu.cpp -o CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.s

CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.o: CMakeFiles/RKS.dir/flags.make
CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.o: ../src/Scene/OptionsMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/cpp-workspace/RKS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.o -c /home/jack/cpp-workspace/RKS/src/Scene/OptionsMenu.cpp

CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/cpp-workspace/RKS/src/Scene/OptionsMenu.cpp > CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.i

CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/cpp-workspace/RKS/src/Scene/OptionsMenu.cpp -o CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.s

CMakeFiles/RKS.dir/src/Scene/Scene.cpp.o: CMakeFiles/RKS.dir/flags.make
CMakeFiles/RKS.dir/src/Scene/Scene.cpp.o: ../src/Scene/Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/cpp-workspace/RKS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/RKS.dir/src/Scene/Scene.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RKS.dir/src/Scene/Scene.cpp.o -c /home/jack/cpp-workspace/RKS/src/Scene/Scene.cpp

CMakeFiles/RKS.dir/src/Scene/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RKS.dir/src/Scene/Scene.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/cpp-workspace/RKS/src/Scene/Scene.cpp > CMakeFiles/RKS.dir/src/Scene/Scene.cpp.i

CMakeFiles/RKS.dir/src/Scene/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RKS.dir/src/Scene/Scene.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/cpp-workspace/RKS/src/Scene/Scene.cpp -o CMakeFiles/RKS.dir/src/Scene/Scene.cpp.s

CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.o: CMakeFiles/RKS.dir/flags.make
CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.o: ../src/external/ResourceManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/cpp-workspace/RKS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.o -c /home/jack/cpp-workspace/RKS/src/external/ResourceManager.cpp

CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/cpp-workspace/RKS/src/external/ResourceManager.cpp > CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.i

CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/cpp-workspace/RKS/src/external/ResourceManager.cpp -o CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.s

CMakeFiles/RKS.dir/src/main.cpp.o: CMakeFiles/RKS.dir/flags.make
CMakeFiles/RKS.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jack/cpp-workspace/RKS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/RKS.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RKS.dir/src/main.cpp.o -c /home/jack/cpp-workspace/RKS/src/main.cpp

CMakeFiles/RKS.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RKS.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jack/cpp-workspace/RKS/src/main.cpp > CMakeFiles/RKS.dir/src/main.cpp.i

CMakeFiles/RKS.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RKS.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jack/cpp-workspace/RKS/src/main.cpp -o CMakeFiles/RKS.dir/src/main.cpp.s

# Object files for target RKS
RKS_OBJECTS = \
"CMakeFiles/RKS.dir/src/Engine.cpp.o" \
"CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.o" \
"CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.o" \
"CMakeFiles/RKS.dir/src/Scene/Scene.cpp.o" \
"CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.o" \
"CMakeFiles/RKS.dir/src/main.cpp.o"

# External object files for target RKS
RKS_EXTERNAL_OBJECTS =

RKS: CMakeFiles/RKS.dir/src/Engine.cpp.o
RKS: CMakeFiles/RKS.dir/src/Scene/MainMenu.cpp.o
RKS: CMakeFiles/RKS.dir/src/Scene/OptionsMenu.cpp.o
RKS: CMakeFiles/RKS.dir/src/Scene/Scene.cpp.o
RKS: CMakeFiles/RKS.dir/src/external/ResourceManager.cpp.o
RKS: CMakeFiles/RKS.dir/src/main.cpp.o
RKS: CMakeFiles/RKS.dir/build.make
RKS: /usr/lib/libsfml-graphics.so.2.5.1
RKS: /usr/lib/libsfml-audio.so.2.5.1
RKS: /usr/lib/libsfml-window.so.2.5.1
RKS: /usr/lib/libsfml-system.so.2.5.1
RKS: CMakeFiles/RKS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jack/cpp-workspace/RKS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable RKS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RKS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/RKS.dir/build: RKS

.PHONY : CMakeFiles/RKS.dir/build

CMakeFiles/RKS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/RKS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/RKS.dir/clean

CMakeFiles/RKS.dir/depend:
	cd /home/jack/cpp-workspace/RKS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jack/cpp-workspace/RKS /home/jack/cpp-workspace/RKS /home/jack/cpp-workspace/RKS/build /home/jack/cpp-workspace/RKS/build /home/jack/cpp-workspace/RKS/build/CMakeFiles/RKS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/RKS.dir/depend

