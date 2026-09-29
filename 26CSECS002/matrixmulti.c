//program to do matrix multiplication

#include<stdio.h>
int main (){
	int r1,c1,r2,c2,i,j,k;
	printf("enter row and column size  of matrix1: ");
	scanf("%d%d",&r1,&c1);
	printf("enter row and column size  of matrix2: ");
	scanf("%d%d",&r2,&c2);
	int matrix1[r1][c1];	//matrix 1
	int matrix2[r2][c2];	//matrix 2
	int matrix3[r1][c2];  	//product of matrix
	if(r1==c2){
		printf("enter elements of matrix1 :\n");
		for(i=0 ; i<r1; i++){ for(j=0 ; j<c1; j++){scanf("%d",&matrix1[i][j]);} }
		printf("enter elements of matrix2 :\n");
		for(i=0 ; i<r2; i++){ for(j=0 ; j<c2; j++){scanf("%d",&matrix2[j][i]);} }
		printf("matrix multiplication gives :\n");
		for(i=0 ; i<r1; i++){ for(j=0 ; j<c2; j++){	int sum=0;	for(k=0 ; k<r1 ; k++){sum += matrix1[i][k]*matrix2[k][j];}	matrix3[i][j] = sum; } }
		printf("\n");
	}
	else{ printf("matrix multiplication is not possible");}
	return 0;
}
