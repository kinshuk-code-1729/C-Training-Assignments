#include <stdio.h>
int main()
{
    int a, b = 1, d;
    double c,e=0;
    printf("Enter the Length of 1^1+2^3+3^9+_ _ _ :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        c = 1;
        for (int j = 1; j <= b; j++)
        {
            c = c * i;
        }
        e = e + c;
        printf("%f\n", c);
        b = b * 3;
    }
    printf("Sum is %f\n", e);
    return 0;
}