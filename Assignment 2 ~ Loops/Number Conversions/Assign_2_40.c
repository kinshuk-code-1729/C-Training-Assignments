// Program to accept any hexadecimal number and convert into decimal
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int decnum=0, rem, i=0, len=0;
    char hexnum[20];
    printf("Enter any Hexadecimal Number: ");
    scanf("%s", hexnum);
    while(hexnum[i]!='\0')
    {
        len++;
        i++;
    }
    len--;
    i=0;
    while(len>=0)
    {
        rem = hexnum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else
        {
            printf("\nYou've entered an invalid Hexadecimal digit");
            getch();
            return 0;
        }
        decnum = decnum + (rem*pow(16, i));
        len--;
        i++;
    }
    printf("\nEquivalent Decimal Value = %d", decnum);
    getch();
    return 0;
}