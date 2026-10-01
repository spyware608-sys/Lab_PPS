//program to enter marks and store it
//try to turn it into a matrix form of input and output
#include<stdio.h>
int main (){
	int rowsize,columnsize,i,j;
	printf("enter row size  and  column size: ");
	scanf("%d %d",&rowsize,&columnsize);
	int marks[rowsize][columnsize];
	printf("enter values : ");
	for(i=0 ; i<rowsize ; i++){
		for(j=0 ; j<columnsize ; j++){
			scanf("%d",marks[i][j]);
		}
	}
	for(i=0 ; i<rowsize ; i++){
		for(j=0 ; j<columnsize ; j++){
			printf("%d ",marks[i][j]);
		}
	printf("\n");
	}
	return 0;
}
