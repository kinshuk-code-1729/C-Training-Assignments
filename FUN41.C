/*void change(int a)
{
  a=a+10;
  printf("\na=%d",a);
 }*/



void change(int *a)
{
  *a=*a+10;
  printf("\n*a=%d",*a);
}





void main()
{
  int b=20;
  clrscr();
  //change(b);
 // printf("\nb=%d",b);





 change(&b);
 printf("\nb=%d",b);
  getch();
}