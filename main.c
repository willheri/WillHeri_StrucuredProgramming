#include <stdio.h>
#include <stdlib.h>

int main() {
    float radius, surfaceArea;
    const float PI = 3.14159;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    surfaceArea = 4 * PI * radius * radius;

    printf("Surface area of the sphere is: %.2f\n", surfaceArea);

    return 0;
}

