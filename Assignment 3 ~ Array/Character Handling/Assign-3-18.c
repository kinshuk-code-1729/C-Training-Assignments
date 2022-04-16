// Program to accept any alphabet and check whether it is vowel or consonant
#include<stdio.h>
int main(){
  char ch;
  printf("Input a character : ");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  printf("\n\'%c\' is a vowel",ch);
  else printf("\n\'%c\' is a consonent",ch);
return 0;
}