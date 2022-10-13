
list(APPEND _sources
  io_structures.h
  shm_proto.c
  shm_proto.h
  esvo_in_data_init.c
  esvo_in_data_init.h
  )

list(APPEND _avtomatikalib
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

add_executable(test3 "")

target_sources(test3
  PRIVATE
  test3.c
  ${_sources}
  )

target_compile_definitions(test3 PUBLIC SOI70 __UNIX)
# set_property(TARGET test3 PROPERTY C_STANDARD 11)

target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" ${_avtomatikalib})
# target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" bgsn70)
target_link_libraries(test3 PRIVATE rt pthread)

add_subdirectory(tests)

