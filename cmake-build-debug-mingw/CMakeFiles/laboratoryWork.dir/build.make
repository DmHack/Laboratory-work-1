# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2024.2.0.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2024.2.0.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\cmake-build-debug-mingw

# Include any dependencies generated for this target.
include CMakeFiles/laboratoryWork.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/laboratoryWork.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/laboratoryWork.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/laboratoryWork.dir/flags.make

CMakeFiles/laboratoryWork.dir/library.c.obj: CMakeFiles/laboratoryWork.dir/flags.make
CMakeFiles/laboratoryWork.dir/library.c.obj: C:/Users/Admin/laboratoryWorkProject/Laboratory-work-1/library.c
CMakeFiles/laboratoryWork.dir/library.c.obj: CMakeFiles/laboratoryWork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/laboratoryWork.dir/library.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/laboratoryWork.dir/library.c.obj -MF CMakeFiles\laboratoryWork.dir\library.c.obj.d -o CMakeFiles\laboratoryWork.dir\library.c.obj -c C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\library.c

CMakeFiles/laboratoryWork.dir/library.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/laboratoryWork.dir/library.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\library.c > CMakeFiles\laboratoryWork.dir\library.c.i

CMakeFiles/laboratoryWork.dir/library.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/laboratoryWork.dir/library.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\library.c -o CMakeFiles\laboratoryWork.dir\library.c.s

CMakeFiles/laboratoryWork.dir/main.c.obj: CMakeFiles/laboratoryWork.dir/flags.make
CMakeFiles/laboratoryWork.dir/main.c.obj: C:/Users/Admin/laboratoryWorkProject/Laboratory-work-1/main.c
CMakeFiles/laboratoryWork.dir/main.c.obj: CMakeFiles/laboratoryWork.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/laboratoryWork.dir/main.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/laboratoryWork.dir/main.c.obj -MF CMakeFiles\laboratoryWork.dir\main.c.obj.d -o CMakeFiles\laboratoryWork.dir\main.c.obj -c C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\main.c

CMakeFiles/laboratoryWork.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/laboratoryWork.dir/main.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\main.c > CMakeFiles\laboratoryWork.dir\main.c.i

CMakeFiles/laboratoryWork.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/laboratoryWork.dir/main.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.1\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\main.c -o CMakeFiles\laboratoryWork.dir\main.c.s

# Object files for target laboratoryWork
laboratoryWork_OBJECTS = \
"CMakeFiles/laboratoryWork.dir/library.c.obj" \
"CMakeFiles/laboratoryWork.dir/main.c.obj"

# External object files for target laboratoryWork
laboratoryWork_EXTERNAL_OBJECTS =

liblaboratoryWork.a: CMakeFiles/laboratoryWork.dir/library.c.obj
liblaboratoryWork.a: CMakeFiles/laboratoryWork.dir/main.c.obj
liblaboratoryWork.a: CMakeFiles/laboratoryWork.dir/build.make
liblaboratoryWork.a: CMakeFiles/laboratoryWork.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\cmake-build-debug-mingw\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library liblaboratoryWork.a"
	$(CMAKE_COMMAND) -P CMakeFiles\laboratoryWork.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\laboratoryWork.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/laboratoryWork.dir/build: liblaboratoryWork.a
.PHONY : CMakeFiles/laboratoryWork.dir/build

CMakeFiles/laboratoryWork.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\laboratoryWork.dir\cmake_clean.cmake
.PHONY : CMakeFiles/laboratoryWork.dir/clean

CMakeFiles/laboratoryWork.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1 C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1 C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\cmake-build-debug-mingw C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\cmake-build-debug-mingw C:\Users\Admin\laboratoryWorkProject\Laboratory-work-1\cmake-build-debug-mingw\CMakeFiles\laboratoryWork.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/laboratoryWork.dir/depend

