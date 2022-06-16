#include <stdio.h>
#include <string.h>

int main() {
    printf("%lu\n", sizeof(size_t));

    size_t size = strlen("hello world");
    printf("%lu\n", size);

    return 0;
}