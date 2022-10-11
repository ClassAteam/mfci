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

typedef struct esvo_in_data_t {
    uint32_t counter;
    mfci_in_b_t mfci_in_b;
} esvo_in_data_t;

typedef struct esvo_out_data_t {
    uint32_t counter;
    mfci_out_sa1_b_t data1;
    mfci_out_sa1_b_t data2;
    mfci_out_sa1_b_t data3;
    mfci_out_sa1_b_t data4;
    mfci_out_sa1_b_t data5;
    mfci_out_sa1_b_t data6;
    mfci_out_sa1_b_t data7;
    mfci_out_sa1_b_t data8;
} esvo_out_data_t;

typedef struct esvo_buttons_data_t {
    uint32_t counter;
    uint32_t button_id;
} esvo_buttons_data_t;


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
