//WAP to check if a number is prime or not

#include<stdio.h>
int main ()
{
	int i=1 , n;
	int c=0 ;
	printf("enter a number : ");
	scanf("%d",&n);
	for ( i=2 ; i<=n/2 ; i++)
	{
		if ( n % i == 0 ){
			c=c++ ;
			break;
		}
	}
	if (c==0)
		printf("the number %d is prime",n);
	else
		printf("the number %d is not prime",n);
	
	return 0;
}
