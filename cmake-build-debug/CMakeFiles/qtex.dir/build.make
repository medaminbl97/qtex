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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mohamedaminebellil/Desktop/PProjects/qtex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/qtex.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/qtex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qtex.dir/flags.make

CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.o: CMakeFiles/qtex.dir/flags.make
CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.o: qtex_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.o -c /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/qtex_autogen/mocs_compilation.cpp

CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/qtex_autogen/mocs_compilation.cpp > CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.i

CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/qtex_autogen/mocs_compilation.cpp -o CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.s

CMakeFiles/qtex.dir/main.cpp.o: CMakeFiles/qtex.dir/flags.make
CMakeFiles/qtex.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qtex.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtex.dir/main.cpp.o -c /Users/mohamedaminebellil/Desktop/PProjects/qtex/main.cpp

CMakeFiles/qtex.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtex.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/PProjects/qtex/main.cpp > CMakeFiles/qtex.dir/main.cpp.i

CMakeFiles/qtex.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtex.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/PProjects/qtex/main.cpp -o CMakeFiles/qtex.dir/main.cpp.s

CMakeFiles/qtex.dir/myApp.cpp.o: CMakeFiles/qtex.dir/flags.make
CMakeFiles/qtex.dir/myApp.cpp.o: ../myApp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qtex.dir/myApp.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtex.dir/myApp.cpp.o -c /Users/mohamedaminebellil/Desktop/PProjects/qtex/myApp.cpp

CMakeFiles/qtex.dir/myApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtex.dir/myApp.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/PProjects/qtex/myApp.cpp > CMakeFiles/qtex.dir/myApp.cpp.i

CMakeFiles/qtex.dir/myApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtex.dir/myApp.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/PProjects/qtex/myApp.cpp -o CMakeFiles/qtex.dir/myApp.cpp.s

CMakeFiles/qtex.dir/mtl.cpp.o: CMakeFiles/qtex.dir/flags.make
CMakeFiles/qtex.dir/mtl.cpp.o: ../mtl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/qtex.dir/mtl.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtex.dir/mtl.cpp.o -c /Users/mohamedaminebellil/Desktop/PProjects/qtex/mtl.cpp

CMakeFiles/qtex.dir/mtl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtex.dir/mtl.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/PProjects/qtex/mtl.cpp > CMakeFiles/qtex.dir/mtl.cpp.i

CMakeFiles/qtex.dir/mtl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtex.dir/mtl.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/PProjects/qtex/mtl.cpp -o CMakeFiles/qtex.dir/mtl.cpp.s

CMakeFiles/qtex.dir/matrx.cpp.o: CMakeFiles/qtex.dir/flags.make
CMakeFiles/qtex.dir/matrx.cpp.o: ../matrx.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/qtex.dir/matrx.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/qtex.dir/matrx.cpp.o -c /Users/mohamedaminebellil/Desktop/PProjects/qtex/matrx.cpp

CMakeFiles/qtex.dir/matrx.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/qtex.dir/matrx.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mohamedaminebellil/Desktop/PProjects/qtex/matrx.cpp > CMakeFiles/qtex.dir/matrx.cpp.i

CMakeFiles/qtex.dir/matrx.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/qtex.dir/matrx.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mohamedaminebellil/Desktop/PProjects/qtex/matrx.cpp -o CMakeFiles/qtex.dir/matrx.cpp.s

# Object files for target qtex
qtex_OBJECTS = \
"CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qtex.dir/main.cpp.o" \
"CMakeFiles/qtex.dir/myApp.cpp.o" \
"CMakeFiles/qtex.dir/mtl.cpp.o" \
"CMakeFiles/qtex.dir/matrx.cpp.o"

# External object files for target qtex
qtex_EXTERNAL_OBJECTS =

qtex: CMakeFiles/qtex.dir/qtex_autogen/mocs_compilation.cpp.o
qtex: CMakeFiles/qtex.dir/main.cpp.o
qtex: CMakeFiles/qtex.dir/myApp.cpp.o
qtex: CMakeFiles/qtex.dir/mtl.cpp.o
qtex: CMakeFiles/qtex.dir/matrx.cpp.o
qtex: CMakeFiles/qtex.dir/build.make
qtex: /opt/homebrew/Cellar/qt/6.2.3_1/lib/QtWidgets.framework/Versions/A/QtWidgets
qtex: /opt/homebrew/Cellar/qt/6.2.3_1/lib/QtGui.framework/Versions/A/QtGui
qtex: /opt/homebrew/Cellar/qt/6.2.3_1/lib/QtCore.framework/Versions/A/QtCore
qtex: CMakeFiles/qtex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable qtex"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qtex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qtex.dir/build: qtex
.PHONY : CMakeFiles/qtex.dir/build

CMakeFiles/qtex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qtex.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qtex.dir/clean

CMakeFiles/qtex.dir/depend:
	cd /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mohamedaminebellil/Desktop/PProjects/qtex /Users/mohamedaminebellil/Desktop/PProjects/qtex /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug /Users/mohamedaminebellil/Desktop/PProjects/qtex/cmake-build-debug/CMakeFiles/qtex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/qtex.dir/depend

