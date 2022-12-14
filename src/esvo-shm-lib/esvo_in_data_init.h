#ifndef ESVO_IN_DATA_INIT_H_
#define ESVO_IN_DATA_INIT_H_

#include "io_structures.h"
#include "isoi70m.h"
#include "shm_proto.h"

void esvo_in_data_init(esvo_in_data_t* ptr);

void push_button_1(esvo_buttons_data_t* ptr);

void esvo_in_data_upd(esvo_in_data_t* ptr);

void esvo_in_data_print(esvo_in_data_t* ptr);

void buttons_print(esvo_buttons_data_t* ptr);


#endif // ESVO_IN_DATA_INIT_H_
