/* Program to display following pattern on the screen using Nested Loop
***** 
*****
*****
*****
*****
*/
#include <stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the maximum no. of rows : ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n");
  for(j=0;j<n;j++)
    printf("*");
  }
 return 0;
 }