
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

add_executable(test3 test3.c)

# target_link_libraries(test3 PRIVATE "-Wl,--disable-new-dtags" ${_avtomatikalib})
target_link_libraries(test3 PRIVATE ${_avtomatikalib})
target_link_libraries(test3 PUBLIC esvo-shm-lib)

add_subdirectory(tests)
add_subdirectory(esvo-shm-lib)
