// Program to read weekday number and print weekday name
#include<stdio.h>
int main(){
    int wn;
    printf("\nEnter week day number : ");
    scanf("%d",&wn);
    switch(wn){
        case 1: printf("\nMonday");
        break;
        case 2: printf("\nTuesday");
        break;
        case 3: printf("\nWednesday");
        break;
        case 4: printf("\nThursday");
        break;
        case 5: printf("\nFriday");
        break;
        case 6: printf("\nSaturday");
        break;
        case 7: printf("\nSunday");
        break;
        default : printf("\nYou've Enter Invalid WEEK DAY NUMBER !!!!!");
       break;
        }
    return 0;
}