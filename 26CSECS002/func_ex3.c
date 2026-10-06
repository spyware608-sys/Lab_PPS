//program to check given number is prime or not using function
#include<stdio.h>
int primecheck();
int main(){
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	primecheck( int n; );
	return 0;
}
int primecheck( int n; ){
	int i=1 , n;
	int c=0 ;
	for ( i=2 ; i<=n/2 ; i++)
	{ if ( n % i == 0 ){ c=c++ ; break; } }
	if (c==0) printf("the number %d is prime",n);
	else printf("the number %d is not prime",n);	
	return 0;
}
