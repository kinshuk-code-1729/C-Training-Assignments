/* Program to display following pattern on the screen using Nested Loop
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main()
{
  int n,i,j,k;
  printf("Enter the maximum no. of rows : ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   for(j=n-1;j>=i;j--)
   {
   printf(" ");
   }
   for(k=1;k<=i;k++)
   {
    printf("*");
    }
    printf("\n");
   }
  return 0;
}