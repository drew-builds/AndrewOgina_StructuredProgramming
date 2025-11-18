#include <stdio.h>
#define PI 3.14159

int main()
{
    float radius, surfaceArea;

    // Input the radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate surface area
    surfaceArea = 4 * PI * radius * radius;

    // Display result
    printf("The surface area of the sphere with radius %.2f is %.2f\n", radius, surfaceArea);

    return 0;
}
