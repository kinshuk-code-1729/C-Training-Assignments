/* Program to display following pattern on the screen using Nested Loop
    1
   121
  12321
 1234321
123454321
*/
#include<stdio.h>
int main(){
int i,j,n;
printf("Enter Value of \'n\' : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("%d",j);
    }
    for(j=i-1;j>0;j--){
        printf("%d",j);
    }
    printf("\n");
}
return 0;
}