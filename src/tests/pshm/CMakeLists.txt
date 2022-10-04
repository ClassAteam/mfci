add_executable(pshm_send pshm_ucase_send.c pshm_ucase.h)
add_executable(pshm_bounce pshm_ucase_bounce.c pshm_ucase.h)

target_link_libraries(pshm_send rt pthread)
target_link_libraries(pshm_bounce rt pthread)
