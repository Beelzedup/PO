# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\RPG_PROJECT_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\RPG_PROJECT_autogen.dir\\ParseCache.txt"
  "RPG_PROJECT_autogen"
  )
endif()
