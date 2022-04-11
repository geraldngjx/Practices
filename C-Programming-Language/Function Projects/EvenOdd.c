#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a Positive Integer:");
    scanf("%d",&num);

    if (num > 0)
    {
        if (num % 2 == 0)
        {
            printf("This integer is an even number.");
        }
        else
        {
            printf("This integer is an odd number.");
        }
    }
    else if (num == 0)
    {
        printf("Error! Please input a positive number");
        return EXIT_FAILURE;
    }
    else
    {
        printf("Error! Please input a positive number.");
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
