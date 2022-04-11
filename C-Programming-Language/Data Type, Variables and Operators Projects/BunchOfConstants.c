#include <stdio.h>
#include <stdlib.h>

int main()
{
    int moonLanding = 1969;
    printf("Moon Landing: %10d\n\n",moonLanding);

    double speedOfLight = 299792458;
    printf("Speed of Light: %.3e\n\n",speedOfLight);

    float pi = 3.142;
    printf("Pi: %+.1e\n\n", pi);

    const unsigned hexaDEAD = 0xDEADU;
    const unsigned hexaSECRET = 51966U;
    printf("hexaDEAD:\n 0x%X\n %6u\n\n", hexaDEAD, hexaDEAD);
    printf("hexaSECRET:\n %x\n\n", hexaSECRET);
}