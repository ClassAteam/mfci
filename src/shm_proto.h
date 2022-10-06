#ifndef SHM_PROTO_H_
#define SHM_PROTO_H_

#include "io_structures.h"

#define errExit(msg)    do { perror(msg); exit(EXIT_FAILURE);   \
    } while (0)

#define BUF_SIZE 1024   /* Maximum size for exchanged string */

/* Define a structure that will be imposed on the shared
   memory object */

struct shmbuf {
    sem_t  sem1;            /* POSIX unnamed semaphore */
    sem_t  sem2;            /* POSIX unnamed semaphore */
    size_t cnt;             /* Number of bytes used in 'buf' */
    char   buf[BUF_SIZE];   /* Data being transferred */
};

typedef struct shm_in_holder_t {
    int* fd;
    const char* shm_name;
    esvo_in_data_t* data;
} shm_in_holder_t;

shm_in_holder_t* shm_in_holder_new();

void shm_in_holder_ctor(shm_in_holder_t* in_data_t, char* shm_name);

typedef struct shm_out_holder_t {
    int* fd;
    const char* shm_name;
    esvo_out_data_t* data;
} shm_out_holder_t;

shm_out_holder_t* shm_out_holder_new();

void shm_out_holder_ctor(shm_out_holder_t* out_data_t, char* shm_name);

typedef struct shm_buttons_holder_t {
    int* fd;
    const char* shm_name;
    esvo_buttons_data_t* data;
} shm_buttons_holder_t;

shm_buttons_holder_t* shm_buttons_holder_new();

void shm_buttons_holder_ctor(shm_buttons_holder_t* buttons_data_t, char* shm_name);




#endif // SHM_PROTO_H_
