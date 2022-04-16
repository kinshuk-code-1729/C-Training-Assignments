/* Program to display following pattern on the screen using Nested Loop
*
**
***
****
*****
*/
#include <stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the maximum no. of rows : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { for(j=1;j<=i;j++)
  {
    printf("*");
  }
  printf("\n");
 }
 return 0;
 }