#include <stdio.h>
int main()
{
    int a, b = 2, d = 1;
    double sum = 0, c, f;
    printf("Enter The Length of 1^2/!1+2^4/!2+3^8/!4+_ _ _ _ :");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        c = 1;
        for (int j = 1; j <= b; j++)
        {
            c = c * i;
        }
        b = b * 2;
        f = 1;
        for (int k = 1; k <= d; k++)
        {
            f = f * k;
        }
        d = d * 2;
        printf("%f\t/\t%f\n", c, f);
        sum = sum + c / f;
    }
    printf("Sum = %f\n", sum);
    return 0;
}