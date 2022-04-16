// Program to relate two integers using =, >, <
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter Two numbers : ");
    scanf("%d%d",&x,&y);
    if(x>=y){ if(x!=y) printf("%d < %d or we can say %d > %d",y,x,x,y);
       else if(x==y) printf("Both the numbers are equal");
    }
else if(y>=x){ if(y!=x) printf("%d < %d or we can say %d > %d",x,y,y,x);
       else if(y==x) printf("Both the numbers are equal");
    }
return 0;
}