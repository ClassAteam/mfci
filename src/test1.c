#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <fcntl.h>
#include <stdlib.h>

#include "module_mfci.h"
#include "io_structures.h"

int main()
{
    const char fonts[] = "home/ivan/repo/mfci_test/electroautomatic/mfci-bgs/x64/fonts_mfi.hex";
    shm_in_data *in_data;
    shm_out_data *out_data;
    shm_in_buttons_data *buttons;

    int shm_in_id;
    int shm_out_id;
    int shm_buttons_id;

    char shm_in_key[] = "20441";
    char shm_out_key[] = "20442";
    char shm_buttons_key[] = "20443";


    if((shm_in_id = shmget(20441, sizeof(shm_in_data), IPC_CREAT | 0666)) == -1)
    {
        printf("the shared memory input structure creatation failure");
        exit(2);
    }

    in_data = (shm_in_data*) shmat(shm_in_id, 0, 0);

    if((shm_out_id = shmget(20442, sizeof(shm_out_data), IPC_CREAT | 0666)) == -1)
    {
        printf("the shared memory input structure creatation failure");
        exit(2);
    }

    out_data = (shm_out_data*) shmat(shm_out_id, 0, 0);

    if((shm_buttons_id = shmget(20443, sizeof(shm_in_buttons_data), IPC_CREAT | 0666)) == -1)
    {
        printf("the shared memory input structure creatation failure");
        exit(2);
    }

    buttons = (shm_in_buttons_data*) shmat(shm_buttons_id, 0, 0);

    struct module_mfci_init_data_t mfci1;

    mfci1.mode = MODULE_MFCI_MODE_ESVO;
    mfci1.number = 1;
    mfci1.font_filename = fonts;
    mfci1.shm_in_data_id = shm_in_key;
    mfci1.shm_out_data_id = shm_out_key;
    mfci1.shm_in_buttons_id = shm_buttons_key;

    module_mfci_create(&mfci1);
    printf("working\n");
    while(1);
}

