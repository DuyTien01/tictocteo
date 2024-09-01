# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TicTocTeo_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TicTocTeo_autogen.dir\\ParseCache.txt"
  "TicTocTeo_autogen"
  )
endif()
