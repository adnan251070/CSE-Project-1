#include <stdio.h>
int main() 
{
    float base, height, area;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of Triangle: %.2f\n", area);
    return 0;
}
