#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned data = 0xABCD;
    unsigned N = 4;
    unsigned M = 7;

/*
0b1111 = 15 bits = 2^4 - 1
0b0111 = 7 bits = 2^3 - 1
0b0011 = 3 bits = 2^2 - 1
0b0001 = 1 bits = 2^1 - 1
Number of Bits = 2^W - 1

[0:1] = 2 bits
[0:2] = 3 bits
[3:5] = 3 bits
[2:7] = (7 - 2 + 1) bits = 6 bits
[N:M] = (M - N + 1) bits
*/

    unsigned W = M - N + 1;
    unsigned bitmask = (1 << W) - 1; // 1 << W = 0b1000 = 16 bits if W = 4

    unsigned result = (data >> N) & bitmask;
    printf("Data: 0x%04X\n",data);
    printf("Result: 0x%04X\n",result);
}