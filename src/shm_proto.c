#include "shm_proto.h"

shm_in_holder_t* shm_in_holder_new() {
  return (shm_in_holder_t*)malloc(sizeof(shm_in_holder_t));
}

void shm_in_holder_ctor(shm_in_holder_t* ptr, char* shm_name) {
  shm_unlink(shm_name);
  ptr->shm_name = shm_name;
  ptr->fd = (int*)malloc(sizeof(int));
  *ptr->fd = shm_open(ptr->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);

    if (*ptr->fd == -1)
      errExit("shm_open_in");

    if (ftruncate(*ptr->fd, sizeof(shm_in_holder_t)) == -1)
      errExit("ftruncate_in");

    ptr->data = (esvo_in_data_t*)malloc(sizeof(esvo_in_data_t));

    ptr->data = mmap(NULL, sizeof(esvo_in_data_t),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, *ptr->fd, 0);
    if (ptr->data == MAP_FAILED)
      errExit("mmap");
    exit;
}

shm_out_holder_t* shm_out_holder_new() {
  return (shm_out_holder_t*)malloc(sizeof(shm_out_holder_t));
}

void shm_out_holder_ctor(shm_out_holder_t* ptr, char* shm_name) {
  shm_unlink(shm_name);
  ptr->shm_name = shm_name;
  ptr->fd = (int*)malloc(sizeof(int));
  *ptr->fd = shm_open(ptr->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);

    if (*ptr->fd == -1)
      errExit("shm_open_out");

    if (ftruncate(*ptr->fd, sizeof(shm_out_holder_t)) == -1)
      errExit("ftruncate_out");

    ptr->data = (esvo_out_data_t*)malloc(sizeof(esvo_out_data_t));

    ptr->data = mmap(NULL, sizeof(esvo_out_data_t),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, *ptr->fd, 0);
    if (ptr->data == MAP_FAILED)
      errExit("mmap");
    exit;
}

shm_buttons_holder_t* shm_buttons_holder_new() {
  return (shm_buttons_holder_t*)malloc(sizeof(shm_buttons_holder_t));
}

void shm_buttons_holder_ctor(shm_buttons_holder_t* ptr, char* shm_name) {
  shm_unlink(shm_name);
  ptr->shm_name = shm_name;
  ptr->fd = (int*)malloc(sizeof(int));
  *ptr->fd = shm_open(ptr->shm_name, O_CREAT | O_EXCL | O_RDWR,
                         S_IRUSR | S_IWUSR);

    if (*ptr->fd == -1)
      errExit("shm_open_buttons");

    if (ftruncate(*ptr->fd, sizeof(shm_buttons_holder_t)) == -1)
      errExit("ftruncate_buttons");

    ptr->data = (esvo_buttons_data_t*)malloc(sizeof(esvo_buttons_data_t));

    ptr->data = mmap(NULL, sizeof(esvo_buttons_data_t),
                   PROT_READ | PROT_WRITE,
                   MAP_SHARED, *ptr->fd, 0);
    if (ptr->data == MAP_FAILED)
      errExit("mmap");
    exit;
}
