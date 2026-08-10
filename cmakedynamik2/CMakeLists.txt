# CMakeList.txt : CMake project for CMakeProject, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeProject")
set (SOURCES
Dllcmakedynamik/Figure.cpp
Dllcmakedynamik/Triangle.cpp
Dllcmakedynamik/right_triangle.cpp
Dllcmakedynamik/isosceles_triangle.cpp
Dllcmakedynamik/equilateral_triangle.cpp
Dllcmakedynamik/Quadrangle.cpp
Dllcmakedynamik/rectangle.cpp
Dllcmakedynamik/parallelogram.cpp
Dllcmakedynamik/rhombus.cpp
Dllcmakedynamik/square.cpp
)
set (HEADERS 
Dllcmakedynamik/Figure.h
Dllcmakedynamik/Triangle.h
Dllcmakedynamik/right_triangle.h
Dllcmakedynamik/isosceles_triangle.h
Dllcmakedynamik/equilateral_triangle.h
Dllcmakedynamik/Quadrangle.h
Dllcmakedynamik/rectangle.h
Dllcmakedynamik/parallelogram.h
Dllcmakedynamik/rhombus.h
Dllcmakedynamik/square.h
)
add_library(Dllcmakedynamik SHARED ${SOURCES} ${HEADERS})
#add_library(Dllcmakedynamik SHARED "Figure.h" "Triangle.h" "right_triangle.h" "isosceles_triangle.h" "equilateral_triangle.h" "Quadrangle.h" "rectangle.h" "parallelogram.h" "rhombus.h" "square.h" "Figure.cpp" "Triangle.cpp" "right_triangle.cpp" "isosceles_triangle.cpp" "equilateral_triangle.cpp" "Quadrangle.cpp" "rectangle.cpp" "parallelogram.cpp" "rhombus.cpp" "square.cpp")
#set(CMEKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
# Add source to this project's executable.
add_executable (CMakeProject "CMakeProject.cpp")

target_compile_definitions(Dllcmakedynamik PRIVATE LEAVER_EXPORTS)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
target_link_libraries(CMakeProject Dllcmakedynamik)