# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\VSCODE\CPP\Luo-Gu-practice\1-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\VSCODE\CPP\Luo-Gu-practice\1-1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\1_1.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\1_1.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\1_1.dir\flags.make

CMakeFiles\1_1.dir\main.cpp.obj: CMakeFiles\1_1.dir\flags.make
CMakeFiles\1_1.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\VSCODE\CPP\Luo-Gu-practice\1-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/1_1.dir/main.cpp.obj"
	D:\PROGRA~2\MICROS~2\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\1_1.dir\main.cpp.obj /FdCMakeFiles\1_1.dir\ /FS -c D:\VSCODE\CPP\Luo-Gu-practice\1-1\main.cpp
<<

CMakeFiles\1_1.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1_1.dir/main.cpp.i"
	D:\PROGRA~2\MICROS~2\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe > CMakeFiles\1_1.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\VSCODE\CPP\Luo-Gu-practice\1-1\main.cpp
<<

CMakeFiles\1_1.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1_1.dir/main.cpp.s"
	D:\PROGRA~2\MICROS~2\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\1_1.dir\main.cpp.s /c D:\VSCODE\CPP\Luo-Gu-practice\1-1\main.cpp
<<

# Object files for target 1_1
1_1_OBJECTS = \
"CMakeFiles\1_1.dir\main.cpp.obj"

# External object files for target 1_1
1_1_EXTERNAL_OBJECTS =

1_1.exe: CMakeFiles\1_1.dir\main.cpp.obj
1_1.exe: CMakeFiles\1_1.dir\build.make
1_1.exe: CMakeFiles\1_1.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\VSCODE\CPP\Luo-Gu-practice\1-1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1_1.exe"
	"D:\Program Files\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\1_1.dir --rc=D:\WINDOW~1\10\bin\100190~1.0\x86\rc.exe --mt=D:\WINDOW~1\10\bin\100190~1.0\x86\mt.exe --manifests -- D:\PROGRA~2\MICROS~2\VC\Tools\MSVC\1428~1.299\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\1_1.dir\objects1.rsp @<<
 /out:1_1.exe /implib:1_1.lib /pdb:D:\VSCODE\CPP\Luo-Gu-practice\1-1\cmake-build-debug\1_1.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\1_1.dir\build: 1_1.exe

.PHONY : CMakeFiles\1_1.dir\build

CMakeFiles\1_1.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\1_1.dir\cmake_clean.cmake
.PHONY : CMakeFiles\1_1.dir\clean

CMakeFiles\1_1.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\VSCODE\CPP\Luo-Gu-practice\1-1 D:\VSCODE\CPP\Luo-Gu-practice\1-1 D:\VSCODE\CPP\Luo-Gu-practice\1-1\cmake-build-debug D:\VSCODE\CPP\Luo-Gu-practice\1-1\cmake-build-debug D:\VSCODE\CPP\Luo-Gu-practice\1-1\cmake-build-debug\CMakeFiles\1_1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\1_1.dir\depend

