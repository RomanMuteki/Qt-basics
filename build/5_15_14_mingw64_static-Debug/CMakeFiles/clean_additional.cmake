# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Homework-1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Homework-1_autogen.dir\\ParseCache.txt"
  "Homework-1_autogen"
  )
endif()
