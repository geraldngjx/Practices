#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    
    printf("\n");
    printf("Enter the duration of Planet A orbit: ");
    scanf("%d", &a);
    printf("Enter the duration of Planet B orbit: ");
    scanf("%d", &b);
    printf("Enter the duration of Planet C orbit: ");
    scanf("%d", &c);
    printf("\n");

    for (int lcm = 1; lcm < 10000; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("The time taken for the Planets to meet again is %d days.\n\n", lcm);
            break;
        }
    }
}