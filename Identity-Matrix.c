// Program to check Matrix is an Identity Matrix or Not
#include<stdio.h>
#include<conio.h>
int main(){
 	int i,j,row,col,x[10][10],id=1;
    printf("\nEnter Number of rows and columns : ");
 	scanf("%d%d",&i,&j);
	printf("\nEnter the Matrix Elements Below\n");
	getch();
 	for(row=0;row<i;row++){
		 for(col=0;col<j;col++){
			 printf("\nEnter Element x[%d][%d] : ",row,col);
			 scanf("%d",&x[row][col]);
		}
  	}
	for(row=0;row<i;row++){
		for(col=0;col<j;col++){
			if(x[row][col]!=1 && x[col][row]!=0){
				id=0;
				break;
			}
   	 	}
  	}
  	if(id==1) printf("\nEntered Matrix is an Identity Matrix");
	else printf("\nEntered Matrix is Not an Identity Matrix");  	
 	return 0;
}