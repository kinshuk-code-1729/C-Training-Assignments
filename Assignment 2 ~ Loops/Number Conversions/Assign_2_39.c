// Program to accept any decimal number and convert into hexadecimal
#include <stdio.h>
int main(){
	long int decn,rmd,q,dn=0,m,l;
	int i=1,j,tmp;
    char s;
	printf("Input any Decimal number: ");
	scanf("%ld",&decn);
	q = decn;
    for(l=q;l>0;l=l/16){
        tmp=l%16;
		if( tmp < 10) tmp =tmp + 48;
        else tmp=tmp+55;
        dn=dn*100+tmp;
	    }
    printf("\nThe equivalent Hexadecimal Number : ");
    for(m=dn;m>0;m=m/100){
        s=m%100;
        printf("%c",s);
    }
}