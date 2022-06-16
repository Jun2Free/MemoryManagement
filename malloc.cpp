#include <stdlib.h>

struct Mystruct {
    int i;
    double d;
    char a[5];
};

int main() {
    //Mystruct *p = (Mystruct*)calloc(4, sizeof(Mystruct));
    Mystruct *p = (Mystruct*)malloc(4 * sizeof(Mystruct));

    p[0].i = 1;
    p[0].d = 3.141592;
    p[0].a[0] = 'a';
}