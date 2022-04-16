     #include<stdio.h>
     #include <conio.h>
     #include<string.h>
     int fact(int n)
     {
       if(n==0)
       return 1;
       return n*fact(n-1);
     }
     int sum(int n)
     {
       if (n==0)return 0;
       return  n+sum(n-1);
     }
     int xpy(int x,int y)
     {

       if(y==0)
       return 1;
       return x*xpy(x,y-1);
     }

     void main()
     {
      clrscr();
     printf("\n%d",fact(4));

     printf("\n%d",xpy(2,4));

     getch();
     }