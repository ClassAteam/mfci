#include "shm_proto.h"
#include "esvo_in_data_init.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    shm_in_holder_t* in_holder1 = shm_in_holder_new();
    shm_in_holder_ctor(in_holder1, "mfci_shm_input_1");

    esvo_in_data_init(in_holder1->data);

    shm_out_holder_t* out_holder1 = shm_out_holder_new();
    shm_out_holder_ctor(out_holder1, "mfci_shm_output_1");

    shm_buttons_holder_t* buttons_holder1 = shm_buttons_holder_new();
    shm_buttons_holder_ctor(buttons_holder1, "mfci_shm_buttonsput_1");

    shm_in_holder_t* in_holder2 = shm_in_holder_new();
    shm_in_holder_ctor(in_holder2, "mfci_shm_input_2");

    esvo_in_data_init(in_holder2->data);

    shm_out_holder_t* out_holder2 = shm_out_holder_new();
    shm_out_holder_ctor(out_holder2, "mfci_shm_output_2");

    shm_buttons_holder_t* buttons_holder2 = shm_buttons_holder_new();
    shm_buttons_holder_ctor(buttons_holder2, "mfci_shm_buttonsput_2");

    shm_in_holder_t* in_holder3 = shm_in_holder_new();
    shm_in_holder_ctor(in_holder3, "mfci_shm_input_2");

    esvo_in_data_init(in_holder3->data);

    shm_out_holder_t* out_holder3 = shm_out_holder_new();
    shm_out_holder_ctor(out_holder3, "mfci_shm_output_2");

    shm_buttons_holder_t* buttons_holder3 = shm_buttons_holder_new();
    shm_buttons_holder_ctor(buttons_holder3, "mfci_shm_buttonsput_2");

    while(1)
    {
        sleep(1);

        esvo_in_data_upd(in_holder1->data);
        esvo_in_data_print(in_holder1->data);
        push_button_1(buttons_holder1->data);
        buttons_print(buttons_holder1->data);

        esvo_in_data_upd(in_holder2->data);
        esvo_in_data_print(in_holder2->data);
        push_button_1(buttons_holder2->data);
        buttons_print(buttons_holder2->data);
    }
}
