#include "module_mfci.h"
#include "io_structures.h"
#include "shm_proto.h"

int main()
{
    const char fonts[] = "/home/ivan/repo/mfci_test/"
        "external/electroautomatic/mfci-bgs/x64/fonts_mfi.hex";

    shm_in_data_t shm_in_t;
    shm_in_data_ctor(&shm_in_t, "mfci_shm_input");

    shm_out_data_t shm_out_t;
    shm_out_data_ctor(&shm_out_t, "mfci_shm_output");

    shm_buttons_data_t shm_buttons_t;
    shm_buttons_data_ctor(&shm_buttons_t, "mfci_shm_buttons");

    module_mfci_init_data_t mfci1;

    mfci1.mode = MODULE_MFCI_MODE_ESVO;
    mfci1.number = 1;
    mfci1.font_filename = fonts;
    mfci1.shm_in_data_id = shm_in_t.shm_name;
    mfci1.shm_out_data_id = shm_out_t.shm_name;
    mfci1.shm_in_buttons_id = shm_buttons_t.shm_name;
    module_mfci_create(&mfci1);

    while(1)
    {
      sleep(1);

      /* printf("font file path is:%s", fonts); */
      int result = module_mfci_update();

      if (result != 0)
        printf("module_mfci_update failure\n");
    }
}
