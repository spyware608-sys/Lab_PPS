//WAP to print multiplication table of a given number

#include<stdio.h>
int main(){
	int i=1 , n ;
	printf("enter number n : ");
	scanf("%d",&n);
	
	for( i=1 ; i<= 10 ; i++ )
	{
		int a;
		a = n * i ;
		printf(" %d x %d = %d \n", n , i , a );
	}
	
	return 0;
}
