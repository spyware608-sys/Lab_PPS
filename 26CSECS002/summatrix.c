//program to do matrix addition

#include<stdio.h>
int main (){
	int r,c,i,j;
	printf("enter row and column size : ");
	scanf("%d%d",&r,&c);
	int matrix1[r][c];	//matrix 1
	int matrix2[r][c];	//matrix 2
	int matrix3[r][c];	//sum of matrix
	printf("enter elements of matrix1 :");
	for(i=0 ; i<r; i++){
		for(j=0 ; j<c; j++){
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("enter elements of matrix2 :");
	for(i=0 ; i<r; i++){
		for(j=0 ; j<c; j++){
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("matrix addition gives :\n");
	for(i=0 ; i<r; i++){
		for(j=0 ; j<c; j++){
			matrix3[i][j] = matrix1[i][j]+matrix2[i][j];
			printf("%d ",matrix3[i][j]);
		}
	printf("\n");
	}
	return 0;
}
