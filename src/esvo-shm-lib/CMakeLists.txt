add_library(esvo-shm-lib "")

target_sources(esvo-shm-lib
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/io_structures.h
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/shm_proto.c
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/shm_proto.h
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/esvo_in_data_init.c
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/esvo_in_data_init.h
  )

target_include_directories(esvo-shm-lib
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}
  PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/../../external/electroautomatic/mfci-bgs/include)

target_compile_definitions(esvo-shm-lib PUBLIC SOI70 __UNIX)

target_link_libraries(esvo-shm-lib PRIVATE rt pthread)
