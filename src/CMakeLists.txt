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

list(APPEND mfci_exec
  mfci1
  mfci2
  )

foreach(_mfci IN LISTS mfci_exec)
  add_executable(${_mfci} ${_mfci}.c)

  target_link_libraries(${_mfci} PRIVATE "-Wl,--disable-new-dtags" ${_avtomatikalib})
  target_link_libraries(${_mfci} PUBLIC esvo-shm-lib)
endforeach()

add_subdirectory(tests)
add_subdirectory(esvo-shm-lib)
add_subdirectory(ius)
