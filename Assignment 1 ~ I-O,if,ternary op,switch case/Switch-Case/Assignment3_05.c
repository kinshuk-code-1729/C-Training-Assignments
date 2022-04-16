// Program to read gender (M/F) and print corresponding gender name
 #include <stdio.h>
 #include<conio.h>
 int main()
{ 
    char g;
    printf("Enter Gender (M/m or F/f): ");
    g=getche();
    switch(g)
    {   case 'f':
        case 'F':
            printf("\nGender is Female");
            break;
        case 'm':
        case 'M':
            printf("\nGender is Male");
            break;
     default : printf("\nGender is unspecified");
    }
return 0;
}