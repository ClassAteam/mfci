# target_sources(test
#   PRIVATE
#   test.c
#   io_structures.h
#   )



add_executable(passing_struc_to_p passing_struc_to_p)

add_executable(test2 "")

target_sources(test2
  PRIVATE
  test2.c
  io_structures.h
  )

target_compile_definitions(test2 PUBLIC SOI70 __UNIX)

target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" sys64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" bgsn70)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" graph64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" math64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" md64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" mfi70)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" mo64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" nav64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" pack64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" shm64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" str64)
target_link_libraries(test2 PRIVATE "-Wl,--disable-new-dtags" udp64)

add_subdirectory(tests)
