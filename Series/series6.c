#include <stdio.h>
int main()
{
    int a, b = 2, d, g, l = 2, m, n = 1;
    float sum = 0, f, c, p;
    printf("Enter The Length of 1^1/(!2)^1+3^2/(!4)^2+5^4/(!8)^4_ _ _ _ :");
    scanf("%d", &a);
    for (int i = 1; i <= a * 2; i += 2)
    {
        c = 1;
        for (int j = 1; j <= b; j++)
        {
            c = c * i;
        }
        b = b + 2;
        f = 1;
        for (int k = 1; k <= l; k++)
        {
            f = f * k;
        }
        l = l * 2;
        p = 1;
        for (int m = 1; m <= n; m++)
        {
            p = p * f;
        }
        n = n * 2;
        printf("%f\t/\t%f\n", c, p);
        g++;
        if (g % 2 == 0)
        {
            sum -= c / p;
        }
        else
        {
            sum += c / p;
        }
    }
    printf("Sum is %f\n", sum);
    return 0;
}