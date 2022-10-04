#ifndef SHM_PROTO_H_
#define SHM_PROTO_H_

#include "io_structures.h"

typedef struct shm_in_data_t{
    int fd;
    const char* shm_name;
    shm_in_data* data;
} shm_in_data_t;

void shm_in_data_ctor(shm_in_data_t* sh_data_t, char* shm_name);

typedef struct shm_out_data_t{
    int fd;
    const char* shm_name;
    shm_out_data* data;
} shm_out_data_t;

void shm_out_data_ctor(shm_out_data_t* sh_data_t, char* shm_name);

typedef struct shm_buttons_data_t{
    int fd;
    const char* shm_name;
    shm_buttons_data* data;
} shm_buttons_data_t;

void shm_buttons_data_ctor(shm_buttons_data_t* sh_data_t, char* shm_name);

#endif // SHM_PROTO_H_
