
add_executable(ius ius.c)

target_link_libraries(ius PUBLIC esvo-shm-lib)
