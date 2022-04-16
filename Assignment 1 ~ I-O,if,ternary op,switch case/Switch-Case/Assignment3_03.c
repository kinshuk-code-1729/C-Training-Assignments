// Program to make Simple Calculator
#include <stdio.h>
int main()
 {
  int x,y,z,o;
  printf("Enter first number : ");
  scanf("%d",&x);
  printf("\nEnter second number : ");
  scanf("%d",&y);
  printf("\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\nChoose Your Operation : ");
  scanf("%d",&o);
   switch(o)
   {
    case 1:z=x+y;
	    printf("\n%d + %d = %d",x,y,z);
	    break;
    case 2:z=x-y;
	    printf("\n%d - %d = %d",x,y,z);
	    break;
    case 3:z=x*y;
	    printf("\n%d X %d = %d",x,y,z);
	    break;
    case 4:z=x/y;
	    printf("\n%d / %d = %d",x,y,z);
	    break;
    default: printf("INVALID INPUT!!! , Please enter valid operation");
    }
   return 0;
  }
