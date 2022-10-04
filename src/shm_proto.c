#include "shm_proto.h"

void shm_in_data_ctor(shm_in_data_t* sh_data_t, char* shm_name)
{
    shm_unlink(shm_name);
    sh_data_t->shm_name = shm_name;

    sh_data_t->fd = shm_open(sh_data_t->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);
    if (sh_data_t->fd == -1)
      errExit("shm_open_in");

    if (ftruncate(sh_data_t->fd, sizeof(shm_in_data)) == -1)
      errExit("ftruncate_in");

    sh_data_t->data = (shm_in_data*)malloc(sizeof(shm_in_data));

    sh_data_t->data = mmap(NULL, sizeof(shm_in_data),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, sh_data_t->fd, 0);
    if (sh_data_t->data == MAP_FAILED)
      errExit("mmap");
    exit;
}

void shm_out_data_ctor(shm_out_data_t* sh_data_t, char* shm_name)
{
    shm_unlink(shm_name);
    sh_data_t->shm_name = shm_name;

    sh_data_t->fd = shm_open(sh_data_t->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);
    if (sh_data_t->fd == -1)
      errExit("shm_open_out");

    if (ftruncate(sh_data_t->fd, sizeof(shm_out_data)) == -1)
      errExit("ftruncate_out");

    sh_data_t->data = (shm_out_data*)malloc(sizeof(shm_out_data));

    sh_data_t->data = mmap(NULL, sizeof(shm_out_data),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, sh_data_t->fd, 0);
    if (sh_data_t->data == MAP_FAILED)
      errExit("mmap");
    exit;
}

void shm_buttons_data_ctor(shm_buttons_data_t* sh_data_t, char* shm_name)
{
    shm_unlink(shm_name);
    sh_data_t->shm_name = shm_name;

    sh_data_t->fd = shm_open(sh_data_t->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);
    if (sh_data_t->fd == -1)
      errExit("shm_open_buttons");

    if (ftruncate(sh_data_t->fd, sizeof(shm_buttons_data)) == -1)
      errExit("ftruncate_buttons");

    sh_data_t->data = (shm_buttons_data*)malloc(sizeof(shm_buttons_data));

    sh_data_t->data = mmap(NULL, sizeof(shm_buttons_data),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, sh_data_t->fd, 0);
    if (sh_data_t->data == MAP_FAILED)
      errExit("mmap");
    exit;
}

