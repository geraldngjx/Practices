#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
} Days;

int main()
{
    Days day; // Cannot be char day
    printf("Monday/Sunday: %d/%d\n", Monday, Sunday);
    printf("Enter a day: ");
    scanf("%u",&day);

    switch (day) // Make sure the switch is a subset of main()
    {
    case Monday:
        printf("Day %d is Monday.", day);
        break;
    case Tuesday:
        printf("Day %d is Tuesday.", day);
        break;
    case Wednesday:
        printf("Day %d is Wednesday.", day);
        break;
    case Thursday:
        printf("Day %d is Thursday.", day);
        break;
    case Friday:
        printf("Day %d is Friday.", day);
        break;
    case Saturday:
        printf("Day %d is Saturday.", day);
        break;
    case Sunday:
        printf("Day %d is Sunday.", day);
        break;
    default:
        printf("Day %d is not a day.", day);
        break;
    }
}