#include <stdlib.h>
#include <string.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size) {
void *new_ptr;

if (new_size == 0 && ptr != NULL){
free(ptr);
return NULL;
}

if (ptr == NULL){
new_ptr = malloc(new_size);
return new_ptr;
}

new_ptr = malloc(new_size);

if (new_ptr == NULL){
return NULL;
}

{
size_t copy_size = (old_size < new_size) ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);
}

free(ptr);

return new_ptr;
}
