# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\gaspar\ClionProjects\Raytracer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/test_unit_vec.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_unit_vec.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_unit_vec.dir/flags.make

CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj: ../sources/Core/CalculUnit.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\CalculUnit.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\CalculUnit.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\CalculUnit.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\CalculUnit.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\CalculUnit.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\CalculUnit.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj: ../sources/Core/Color.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\Color.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Color.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Color.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\Color.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Color.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\Color.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj: ../sources/Core/Eye.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\Eye.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Eye.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Eye.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\Eye.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Eye.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\Eye.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj: ../sources/Core/Ray.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\Ray.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Ray.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Ray.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\Ray.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Ray.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\Ray.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj: ../sources/Core/RayTracer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\RayTracer.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\RayTracer.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\RayTracer.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\RayTracer.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\RayTracer.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\RayTracer.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj: ../sources/Core/Scene.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\Scene.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Scene.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Scene.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\Scene.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Scene.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\Scene.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj: ../sources/Core/Spot.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\Spot.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Spot.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Spot.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\Spot.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Spot.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\Spot.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj: ../sources/Core/Vector2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\Vector2.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Vector2.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Vector2.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\Vector2.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Vector2.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\Vector2.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj


CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj: ../sources/Core/Vector3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\sources\Core\Vector3.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Vector3.cpp

CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Vector3.cpp > CMakeFiles\test_unit_vec.dir\sources\Core\Vector3.cpp.i

CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\sources\Core\Vector3.cpp -o CMakeFiles\test_unit_vec.dir\sources\Core\Vector3.cpp.s

CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj


CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj: CMakeFiles/test_unit_vec.dir/flags.make
CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj: CMakeFiles/test_unit_vec.dir/includes_CXX.rsp
CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj: ../test/test_unit_vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_unit_vec.dir\test\test_unit_vector.cpp.obj -c C:\Users\gaspar\ClionProjects\Raytracer\test\test_unit_vector.cpp

CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.i"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\gaspar\ClionProjects\Raytracer\test\test_unit_vector.cpp > CMakeFiles\test_unit_vec.dir\test\test_unit_vector.cpp.i

CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.s"
	C:\Users\gaspar\mingw-w64\i686-5.3.0-posix-dwarf-rt_v4-rev0\mingw32\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\gaspar\ClionProjects\Raytracer\test\test_unit_vector.cpp -o CMakeFiles\test_unit_vec.dir\test\test_unit_vector.cpp.s

CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.requires:

.PHONY : CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.requires

CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.provides: CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.requires
	$(MAKE) -f CMakeFiles\test_unit_vec.dir\build.make CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.provides.build
.PHONY : CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.provides

CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.provides.build: CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj


# Object files for target test_unit_vec
test_unit_vec_OBJECTS = \
"CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj" \
"CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj"

# External object files for target test_unit_vec
test_unit_vec_EXTERNAL_OBJECTS =

../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/build.make
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/linklibs.rsp
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/objects1.rsp
../test_unit_vec.exe: CMakeFiles/test_unit_vec.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ..\test_unit_vec.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_unit_vec.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_unit_vec.dir/build: ../test_unit_vec.exe

.PHONY : CMakeFiles/test_unit_vec.dir/build

CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/CalculUnit.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/Color.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/Eye.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/Ray.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/RayTracer.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/Scene.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/Spot.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/Vector2.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/sources/Core/Vector3.cpp.obj.requires
CMakeFiles/test_unit_vec.dir/requires: CMakeFiles/test_unit_vec.dir/test/test_unit_vector.cpp.obj.requires

.PHONY : CMakeFiles/test_unit_vec.dir/requires

CMakeFiles/test_unit_vec.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_unit_vec.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_unit_vec.dir/clean

CMakeFiles/test_unit_vec.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\gaspar\ClionProjects\Raytracer C:\Users\gaspar\ClionProjects\Raytracer C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug C:\Users\gaspar\ClionProjects\Raytracer\cmake-build-debug\CMakeFiles\test_unit_vec.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_unit_vec.dir/depend

