#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    printf("Smallest number: %d\n", min);
    return 0;
}
