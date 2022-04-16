// Checking whether an input Character is a vowel or a consonent
#include<stdio.h>
#include<conio.h>
int main(){
  char x;
  printf("Enter any character : ");
  x=getche();
  if(x=='A'||x=='a'||x=='E'||x=='e'||x=='I'||x=='i'||x=='O'||x=='o'||x=='U'||x=='u')
  printf("\n\'%c\' is a vowel",x);
  else printf("\n\'%c\' is a consonent",x);
return 0;
}