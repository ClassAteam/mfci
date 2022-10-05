#include "shm_proto.h"

shm_in_data_t* shm_in_data_new() {
  return (shm_in_data_t*)malloc(sizeof(shm_in_data_t));
}

void shm_in_data_ctor(shm_in_data_t* in_data_t, char* shm_name) {
  shm_unlink(shm_name);
  in_data_t->shm_name = shm_name;
  in_data_t->fd = (int*)malloc(sizeof(int));
  *in_data_t->fd = shm_open(in_data_t->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);

    if (*in_data_t->fd == -1)
      errExit("shm_open_in");

    if (ftruncate(*in_data_t->fd, sizeof(shm_in_data)) == -1)
      errExit("ftruncate_in");

    in_data_t->data = (shm_in_data*)malloc(sizeof(shm_in_data));

    in_data_t->data = mmap(NULL, sizeof(shm_in_data),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, *in_data_t->fd, 0);
    if (in_data_t->data == MAP_FAILED)
      errExit("mmap");
    exit;
}

shm_out_data_t* shm_out_data_new() {
  return (shm_out_data_t*)malloc(sizeof(shm_out_data_t));
}

void shm_out_data_ctor(shm_out_data_t* out_data_t, char* shm_name) {
  shm_unlink(shm_name);
  out_data_t->shm_name = shm_name;
  out_data_t->fd = (int*)malloc(sizeof(int));
  *out_data_t->fd = shm_open(out_data_t->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);

    if (*out_data_t->fd == -1)
      errExit("shm_open_in");

    if (ftruncate(*out_data_t->fd, sizeof(shm_out_data)) == -1)
      errExit("ftruncate_in");

    out_data_t->data = (shm_out_data*)malloc(sizeof(shm_out_data));

    out_data_t->data = mmap(NULL, sizeof(shm_out_data),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, *out_data_t->fd, 0);
    if (out_data_t->data == MAP_FAILED)
      errExit("mmap");
    exit;
}

shm_buttons_data_t* shm_buttons_data_new() {
  return (shm_buttons_data_t*)malloc(sizeof(shm_buttons_data_t));
}

void shm_buttons_data_ctor(shm_buttons_data_t* buttons_data_t, char* shm_name) {
  shm_unlink(shm_name);
  buttons_data_t->shm_name = shm_name;
  buttons_data_t->fd = (int*)malloc(sizeof(int));
  *buttons_data_t->fd = shm_open(buttons_data_t->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);

    if (*buttons_data_t->fd == -1)
      errExit("shm_open_in");

    if (ftruncate(*buttons_data_t->fd, sizeof(shm_buttons_data)) == -1)
      errExit("ftruncate_in");

    buttons_data_t->data = (shm_buttons_data*)malloc(sizeof(shm_buttons_data));

    buttons_data_t->data = mmap(NULL, sizeof(shm_buttons_data),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, *buttons_data_t->fd, 0);
    if (buttons_data_t->data == MAP_FAILED)
      errExit("mmap");
    exit;
}
