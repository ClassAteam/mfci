cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(mfci-test LANGUAGES C CXX)

add_executable(test test.c)

include(GNUInstallDirs)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_LIBDIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR})

# ////////////////////////////////////////////////bgsn70
add_library(bgsn70 SHARED IMPORTED)
set_target_properties(bgsn70
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libbgsn70.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////buttons64
add_library(buttons64 SHARED IMPORTED)
set_target_properties(buttons64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libbuttons64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////graph64
add_library(graph64 SHARED IMPORTED)
set_target_properties(graph64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libgraph64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////math64
add_library(math64 SHARED IMPORTED)
set_target_properties(math64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmath64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////md64
add_library(md64 SHARED IMPORTED)
set_target_properties(md64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmd64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# # ////////////////////////////////////////////////mfi70
add_library(mfi70 SHARED IMPORTED)
set_target_properties(mfi70
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmfi70.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////mo64
add_library(mo64 SHARED IMPORTED)
set_target_properties(mo64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libmo64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# /////////////////////////////////////////////////nav64
add_library(nav64 SHARED IMPORTED)
set_target_properties(nav64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libnav64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////pack64
add_library(pack64 SHARED IMPORTED)
set_target_properties(pack64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libpack64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////shm64
add_library(shm64 SHARED IMPORTED)
set_target_properties(shm64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libshm64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////str64
add_library(str64 SHARED IMPORTED)
set_target_properties(str64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libstr64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////sys64
add_library(sys64 SHARED IMPORTED)
set_target_properties(sys64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libsys64.so
  INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )
# ////////////////////////////////////////////////udp64
add_library(udp64 SHARED IMPORTED)
set_target_properties(udp64
  PROPERTIES
  IMPORTED_LOCATION
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/libudp64.so
  INTERFACE_INCLUDE_DIRECTORIES
  ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
  )

target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" sys64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" bgsn70)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" graph64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" math64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" md64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" mfi70)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" mo64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" nav64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" pack64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" shm64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" str64)
target_link_libraries(test PRIVATE "-Wl,--disable-new-dtags" udp64)
