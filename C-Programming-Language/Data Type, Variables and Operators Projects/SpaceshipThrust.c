#include <stdio.h>
#include <stdlib.h>

typedef enum {
    none = 0,
    low = 5,
    medium = 9,
    high = 12,
    maximum = 20
} ThrustLevel;

int main()
{
    printf("Ready to Go Level: %d\n", none);
    printf("Take off Level: %d\n", 20);
    printf("Travelling into the ionsphere: %d\n", medium);
    printf("Travelling into Deep Space: %d\n", low);

    return EXIT_SUCCESS;
}