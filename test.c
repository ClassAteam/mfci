#include <stdio.h>
#include <unistd.h>

#include "module_mfci.h"

int main()
{
    char fonts[] = "home/ivan/repo/mfci_test/electroautomatic/mfci-bgs/x64/fonts_mfi.hex";
    struct module_mfci_init_data_t mfci_1;
    {
        MODULE_MFCI_MODE_ESVO;
        int numberone = 1;
        fonts;

    }

    module_mfci_create(&mfci_1);
    printf("working\n");
}
