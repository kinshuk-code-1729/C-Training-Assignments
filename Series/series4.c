#include <stdio.h>
int main()
{
    int a, b = 1, d = 1;
    double c, e = 0, f;
    printf("Enter the Length of 1^1/!1+2^3/!2+3^9/!4+_ _ _ :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        c = 1, f = 1;
        for (int j = 1; j <= b; j++)
        {
            c = c * i;
        }

        b = b * 3;
        for (int k = 1; k <= d; k++)
        {
            f = f * k;
        }
        e = e + c / f;
        d = d * 2;
    }
    printf("Sum is %f\n", e);
    return 0;
}