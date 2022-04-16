/* Program to display following pattern on the screen using Nested Loop
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include <stdio.h>
int main()
{
 int i,j,n,k;
 printf("Enter the maximum no. of rows : ");
 scanf("%d",&n);
 for(i=n;i>=1;i--)
 { for(j=1;j<=i;j++)
  {
    printf(" ");
    }
    for(k=0;k<=n-i;k++)
 { printf("* ");
 }
 printf("\n");
 }
 return 0;
 }