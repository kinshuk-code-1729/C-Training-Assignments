#include <stdio.h>

int main()
{
    int i, n, c, a = 1, k = 2;
    float b = 0, fact, d;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        c = 1;
        d = 1;
        while (a >= c) //this loop is for power
        {
            d *= i;
            c++;
        }
        a *= 3;
        fact = 1;
        for (int j = 1; j <= k; j++) //this loop is for factorial
        {
            fact *= j;
        }
        k *= 2;
        b += (d / fact);
    }
    printf("The final value is %Lf\n", b);

    return 0;
}