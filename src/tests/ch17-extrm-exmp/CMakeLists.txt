add_executable(shmwrite.out writer1.c)
add_executable(shmread.out reader1.c)
target_link_libraries(shmwrite.out rt)
target_link_libraries(shmread.out rt)
