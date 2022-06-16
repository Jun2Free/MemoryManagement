#include <stdlib.h>
#include <iostream>

struct Mystruct {
    int i;
    double d;
    char a[5];
};

int main() {
    /*
    //malloc practice
    // Mystruct *p = (Mystruct*)calloc(4, sizeof(Mystruct));
    Mystruct *p = (Mystruct*)malloc(4 * sizeof(Mystruct));

    p[0].i = 1;
    p[0].d = 3.141592;
    p[0].a[0] = 'a';
    */

    // realloc practice
    int *p = (int*)malloc(2*sizeof(int));
    p[0] = 1; p[1] = 2;

    p = (int*)realloc(p,4*sizeof(int));
    p[2] = 3; p[3] = 4;

    p = (int*)realloc(p,2*sizeof(int));

    printf("address=%p, value=%d\n", p+0, *(p+0));
    printf("address=%p, value=%d\n", p+1, *(p+1));
    printf("address=%p, value=%d\n", p+2, *(p+2));
    printf("address=%p, value=%d\n", p+3, *(p+3));
}