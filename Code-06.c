#include <stdio.h>
int main() 
{
    float radius, area, periphery;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = 3.1416 * radius * radius;
    periphery = 2 * 3.1416 * radius;
    printf("Area: %.2f\n", area);
    printf("periphery: %.2f\n",periphery );
    return 0;
}
