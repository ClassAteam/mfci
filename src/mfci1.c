#include "module_mfci.h"
#include "io_structures.h"
#include "shm_proto.h"
#include "esvo_in_data_init.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    const char fonts[] = "/home/ivan/repo/mfci_test/"
        "external/electroautomatic/mfci-bgs/x64/fonts_mfi.hex";

    shm_in_holder_t* in_holder1 = shm_in_holder_new();
    shm_in_holder_ctor(in_holder1, "mfci_shm_input_1");

    esvo_in_data_init(in_holder1->data);

    shm_out_holder_t* out_holder1 = shm_out_holder_new();
    shm_out_holder_ctor(out_holder1, "mfci_shm_output_1");

    shm_buttons_holder_t* buttons_holder1 = shm_buttons_holder_new();
    shm_buttons_holder_ctor(buttons_holder1, "mfci_shm_buttonsput_1");

    module_mfci_init_data_t mfci1;

    mfci1.mode = MODULE_MFCI_MODE_ESVO;
    mfci1.number = 1;
    mfci1.number_monitor = 0;
    mfci1.window_mode = 0;
    mfci1.font_filename = fonts;
    mfci1.shm_in_data_id = in_holder1->shm_name;
    mfci1.shm_out_data_id = out_holder1->shm_name;
    mfci1.shm_in_buttons_id = buttons_holder1->shm_name;
    module_mfci_create(&mfci1);
    int upd_result = -1;


    while(1)
    {
      upd_result = module_mfci_update();

      if (upd_result != 0)
        printf("module_mfci_update failure\n");

    }
}
