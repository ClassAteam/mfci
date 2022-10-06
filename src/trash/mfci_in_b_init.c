#include "mfci_in_b_init.h"

void esvo_in_data_init(esvo_in_data_t* ptr) {
    *ptr->counter = 0;
    mfci_in_b_t_init(ptr->mfci_in_b);
}

void mfci_in_b_init(mfci_in_b_t* ptr) {
    *ptr->counter = 0;

    mfci_in_25hz_b_t_init(ptr->mfci_in_25hz_b);
    mfci_in_12hz_b_init(ptr->mfci_in_12hz_b);
    mfci_in_6hz_b_init(ptr->mfci_in_6hz_b);
    mfci_in_1hz_b_init(ptr->mfci_in_1hz_b);
    mfci_in_block_crc_mkio_b_init(ptr->blocks_crc_b[CRC_SA_COUNT]);
}

void mfci_in_25hz_b_init(mfci_in_25hz_b_t* ptr) {
    *ptr->counter = 0;
    mfci_in_25hz_bis_b_init(ptr->mfci_in_25hz_bis_b);
}

void mfci_in_12hz_b_t_init(mfci_in_12hz_b_t* ptr) {
    *ptr->counter = 0;
    mfci_in_12hz_bis_b_init(ptr->mfci_in_12hz_bis_b);
}

void mfci_in_6hz_b_t_init(mfci_in_6hz_b_t* ptr) {
    *ptr->counter = 0;
    mfci_in_6hz_bis_b_init(ptr->mfci_in_6hz_bis_b)
}

void mfci_in_1hz_b_t_init(mfci_in_1hz_b_t* ptr) {
    *ptr->counter = 0;
    mfci_in_1hz_bis_b_init(ptr->mfci_in_1hz_bis_b);
}

void mfci_in_blocks_crc_mkio_b_t_init(mfci_in_blocks_crc_mkio_b_t* ptr) {
    *ptr->counter = 0;
    ptr->mfci_format = MFCI_FORMAT_BLOCKS_CRC;
    mfci_in_blocks_crc_mkio_id_1_b_t_init(ptr->id_1_b);
    mfci_in_blocks_crc_mkio_id_2_b_t_init(ptr->id_2_b);
    crc_start_index = 1;
    crc_count = 1;
    mfci_in_blocks_crc_unit_b_t_init(ptr->crc_b);
}
