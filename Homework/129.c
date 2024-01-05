#include <array>
Array array_create(int init_size) {
    Array a;
    a.array = (int *)malloc(sizeof(int)*init_size);
    a.size = init_size;
    return a;
}