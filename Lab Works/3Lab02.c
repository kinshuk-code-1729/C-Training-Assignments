// Program to Perform addition on two numbers if they are different and if same then perform subtraction
#include<stdio.h>
int main(){
    int x,y,s,d;
    printf("Enter First Number = ");
    scanf("%d",&x);
    printf("\nEnter Second to ADD = ");
    scanf("%d",&y);
    if(x!=y){ s=x+y;
         printf("\nADDITION DONE = %d",s);
    }
    else { d=x-y;
       printf("\nSUBTRACTION DONE = %d",d);
        }
    return 0;
}