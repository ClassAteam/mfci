#include "esvo_in_data_init.h"

void esvo_in_data_init(esvo_in_data_t* ptr) {
    ptr->counter = 0;
    ptr->mfci_in_b.counter = 0;
    ptr->mfci_in_b.mfci_in_25hz_b.counter = 0;
    ptr->mfci_in_b.mfci_in_12hz_b.counter = 0;
    ptr->mfci_in_b.mfci_in_6hz_b.counter = 0;
    ptr->mfci_in_b.mfci_in_1hz_b.counter = 0;
    ptr->mfci_in_b.mfci_in_25hz_b.bis_b.counter = 0;
    ptr->mfci_in_b.mfci_in_25hz_b.bis_b.sa_1_b.counter = 0;
    ptr->mfci_in_b.mfci_in_25hz_b.bis_b.sa_1_b.signals_word_1_b.dv1_turb_overheating = 1;
}

/* ptr->mfci_in_b.blocks_crc_b[CRC_SA_COUNT] = 0; */

void push_button_1(shm_buttons_holder_t* ptr) {
    ptr->data->button_id = ISOI70M_MFCI_BUTTON_LEFT_1;
}

void esvo_in_data_upd(esvo_in_data_t* ptr) {
    ptr->counter++;
    ptr->mfci_in_b.counter++;
    ptr->mfci_in_b.mfci_in_25hz_b.counter++;
    ptr->mfci_in_b.mfci_in_12hz_b.counter++;
    ptr->mfci_in_b.mfci_in_6hz_b.counter++;
    ptr->mfci_in_b.mfci_in_1hz_b.counter++;
    ptr->mfci_in_b.mfci_in_25hz_b.bis_b.counter++;
    ptr->mfci_in_b.mfci_in_25hz_b.bis_b.sa_1_b.counter++;
    ptr->mfci_in_b.mfci_in_25hz_b.bis_b.sa_1_b.signals_word_1_b.dv1_turb_overheating = 1;
}

void esvo_in_data_print(esvo_in_data_t* ptr) {
    printf("esvo_in_data counter: %d \n",ptr->counter);
    printf("mfci_in_b counter: %d \n",ptr->mfci_in_b.counter);
    printf("mfci_in_25hz_b.counter counter: %d \n",ptr->mfci_in_b.mfci_in_25hz_b.counter);
    printf("mfci_in_12hz_b.counter: %d \n",ptr->mfci_in_b.mfci_in_12hz_b.counter);
    printf("mfci_in_6hz_b.counter: %d \n",ptr->mfci_in_b.mfci_in_6hz_b.counter);
    printf("mfci_in_1hz_b.counter: %d \n",ptr->mfci_in_b.mfci_in_1hz_b.counter);
    printf("25hz_b.bis_b.counter: %d \n",ptr->mfci_in_b.mfci_in_25hz_b.bis_b.counter);
    printf("b.sa_1_b.counter: %d \n",ptr->mfci_in_b.mfci_in_25hz_b.bis_b.sa_1_b.counter);
}
