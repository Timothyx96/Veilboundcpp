# CMakeList.txt : CMake project for Veilbound, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("Veilbound")
find_package(raylib CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (Veilbound 
"Veilbound.cpp" 
"Veilbound.h" 

"shared/CardInstance.h" 
"shared/CardDefinition.h"
"shared/Player.h" 
"shared/CardDatabase.h"

"game/Gamestate.h" 
"game/Gamestate.cpp"
"game/Row.cpp"
"game/Row.h"
"game/GamePhase.h" "shared/CardDatabase.h")

target_link_libraries(Veilbound PRIVATE raylib)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Veilbound PROPERTY CXX_STANDARD 17)
endif()
# TODO: Add tests and install targets if needed.

