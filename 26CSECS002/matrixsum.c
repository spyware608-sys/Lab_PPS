//WAP to perform sum of all elements of 2d array matrix

#include<stdio.h>
int main (){
	int row,col;
	printf("enter row and column size : ");
	scanf("%d%d",&row ,&col);
	int arr[row][col],i,j,sum=0;
	printf("enter array elemens : ");
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			scanf("%d",arr[i][j]);
			sum=sum+arr[i][j];
		}
	}
	printf("sum of all elements : %d",sum);
	return 0;
}
