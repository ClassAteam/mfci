list(APPEND all_avtomatika_lib
  bgsn70
  sys64
  graph64
  math64
  md64
  mfi70
  mo64
  nav64
  pack64
  shm64
  str64
  )

foreach(_lib IN LISTS all_avtomatika_lib)
  add_library(${_lib} SHARED IMPORTED GLOBAL)
  set_target_properties(${_lib}
    PROPERTIES
    IMPORTED_LOCATION
    ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/x64/lib${_lib}.so
    INTERFACE_INCLUDE_DIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/electroautomatic/mfci-bgs/include
    )
endforeach()

