// Program to find number of days in a month
#include<stdio.h>
#include<conio.h>
int main(){
    int d,m; char lp;
    printf("Enter any month : ");
    scanf("%d",&m);
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: d=30;
        printf("\nThe number of days in the month %d is %d",m,d);
         break;
        case 2: printf("\n The year is leap year is not : (Y/N) or (y/n) : ");
        lp=getche(); 
        switch(lp){ 
            case 'y': case 'Y': d=29; 
            printf("\nThe number of days in the month %d is %d",m,d);
            break;
            case 'n': case 'N': d=28;
            printf("\nThe number of days in the month %d is %d",m,d);
            break;
            default : printf("\nInvalid Choice : ");
        }
        break;
        case 4:
        case 6:
        case 9:
        case 11: d=31;
        break;
        printf("\nThe number of days in the month %d is %d",m,d);
        default : printf("\nInvalid Month Selected");
        break;
    }
 return 0;
}