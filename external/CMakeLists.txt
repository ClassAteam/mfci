
# ////////////////////////////////////////////////bgsn70
add_library(bgsn70 SHARED IMPORTED GLOBAL)
set_target_properties(bgsn70
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libbgsn70.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////buttons64
add_library(buttons64 SHARED IMPORTED GLOBAL)
set_target_properties(buttons64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libbuttons64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////graph64
add_library(graph64 SHARED IMPORTED GLOBAL)
set_target_properties(graph64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libgraph64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////math64
add_library(math64 SHARED IMPORTED GLOBAL)
set_target_properties(math64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmath64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////md64
add_library(md64 SHARED IMPORTED GLOBAL)
set_target_properties(md64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmd64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# # ////////////////////////////////////////////////mfi70
add_library(mfi70 SHARED IMPORTED GLOBAL)
set_target_properties(mfi70
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmfi70.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////mo64
add_library(mo64 SHARED IMPORTED GLOBAL)
set_target_properties(mo64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmo64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# /////////////////////////////////////////////////nav64
add_library(nav64 SHARED IMPORTED GLOBAL)
set_target_properties(nav64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libnav64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////pack64
add_library(pack64 SHARED IMPORTED GLOBAL)
set_target_properties(pack64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libpack64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////shm64
add_library(shm64 SHARED IMPORTED GLOBAL)
set_target_properties(shm64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libshm64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////str64
add_library(str64 SHARED IMPORTED GLOBAL)
set_target_properties(str64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libstr64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////sys64
add_library(sys64 SHARED IMPORTED GLOBAL)
set_target_properties(sys64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libsys64.so
  INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////udp64
add_library(udp64 SHARED IMPORTED GLOBAL)
set_target_properties(udp64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libudp64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
