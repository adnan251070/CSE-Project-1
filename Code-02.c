#include <stdio.h>
int main() 
{
    int a, b, alpha;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    alpha = a;
    a = b;
    b = alpha;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
