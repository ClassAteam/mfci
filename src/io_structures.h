#ifndef IO_STRUCTURES_H_
#define IO_STRUCTURES_H_

#include "mfci_io_70.h"
#include <sys/mman.h>
#include <fcntl.h>
#include <semaphore.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

typedef struct shm_in_data
{
    uint32_t counter;
    mfci_in_b_t input_struct;
} shm_in_data;

typedef struct shm_out_data
{
    uint32_t counter;
    mfci_out_sa1_b_t data1;
    mfci_out_sa1_b_t data2;
    mfci_out_sa1_b_t data3;
    mfci_out_sa1_b_t data4;
    mfci_out_sa1_b_t data5;
    mfci_out_sa1_b_t data6;
    mfci_out_sa1_b_t data7;
    mfci_out_sa1_b_t data8;
} shm_out_data;

typedef struct shm_buttons_data
{
    uint32_t counter;
    uint32_t button_id;
} shm_buttons_data;


#endif // IO_STRUCTURES_H_

/* Добрый день. Посмотрел что находится в общей памяти. Содержание областей общей памяти для работы с мфци: */
/* shm_in_data_id: */
/* uint32 счётчик; */
/* mfci_in_b_t структура входных данных(см.mfci_io_70.h). */

/* shm_out_data_id: */
/* uint32 счётчик; */
/* mfci_out_sa1_b_t данные 1 прдадреса(см.mfci_io_70.h); */
/* mfci_out_sa2_b_t данные 2 прдадреса(см.mfci_io_70.h); */
/* ... */
/* mfci_out_sa8_b_t данные 8 прдадреса(см.mfci_io_70.h). */

/* shm_in_buttons_id: */
/* uint32 счётчик; */
/* uint32 код кнопки(описывалось ранее). */
