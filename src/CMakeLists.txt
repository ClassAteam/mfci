add_executable(test3 "")

target_sources(test3
  PRIVATE
  test3.c
  io_structures.h
  shm_proto.c
  shm_proto.h
  esvo_in_data_init.c
  esvo_in_data_init.h
  )

target_compile_definitions(test3 PUBLIC SOI70 __UNIX)
# set_property(TARGET test3 PROPERTY C_STANDARD 11)

target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" sys64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" bgsn70)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" graph64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" math64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" md64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" mfi70)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" mo64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" nav64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" pack64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" shm64)
target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" str64)
target_link_libraries(test3 PRIVATE rt pthread)


add_subdirectory(tests)
