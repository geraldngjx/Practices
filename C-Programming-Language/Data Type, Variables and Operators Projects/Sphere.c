#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi = 3.14159;
    double r;
    
    printf("Radius of Sphere: ");
    scanf("%lf", &r); // Wrong Use of Scanf here --> radius = scanf("Radius: ");
    double surfaceArea = pi * 4 * r * r;
    double area = 4.0 / 3 * (pi * r * r * r); // Float 4.0 used to convert 4/3 into a float as 3 would be promoted to a float

    printf("Radius: %.2f\n", r);
    printf("Surface Area of the Sphere: %.2f\n",surfaceArea);
    printf("Area of Sphere: %.3e\n", area);

    return EXIT_SUCCESS;
}