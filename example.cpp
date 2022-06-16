#include <stdio.h>

int main() {
	double *pDbl = new double[5];
    pDbl[0] = 1;
    pDbl[1] = 2;
    pDbl[2] = 3;
    pDbl[3] = 4;
    pDbl[4] = 5;

    delete[] pDbl;

    printf("%f\n", *(pDbl+4));
    printf("%f\n", *(pDbl+3));

	return 0;
}
