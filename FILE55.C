#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int a,b,s,c,d,e;
 FILE *p;
 clrscr();
 p=fopen("C:\\temp\\TT2018.pagla","wb");
 if(p==NULL)
 {
 printf("Can not open file\n" );
 getch();
 exit(1);
 }


 printf("Enter TWO NUMBERS\n");
 scanf("%d %d",&a,&b);
 fwrite(&a,sizeof(a),1,p);
 fwrite(&b,sizeof(b),1,p);
 s=a+b;

 fwrite(&s,sizeof(s),1,p);

 fclose(p);
 p=fopen("C:\\temp\\TT2018.pagla","rb");
 printf("\nFile Contains\
  Following Numbers");

 fread(&c,sizeof(c),1,p);
 fread(&d,sizeof(d),1,p);
 fread(&e,sizeof(e),1,p);

  printf("\n%d\n%d\n%d\n"
  ,c,d,e);

 fclose(p);

 getch();

}