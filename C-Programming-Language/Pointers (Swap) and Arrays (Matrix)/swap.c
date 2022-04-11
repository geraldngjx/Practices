#include <stdio.h>
#include <stdlib.h>

int swapFunction(int *const p1, int *const p2);

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    swapFunction(&a, &b);
    
    printf("The value of a is %d.\n", a);
    printf("The value of b is %d.\n", b);

    return EXIT_SUCCESS;
}

int swapFunction(int *const p1, int *const p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    return *p1;
    return *p2;
}