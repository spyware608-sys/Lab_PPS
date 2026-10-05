//WAP to print factorial of a given number

#include<stdio.h>
int main (){
	int i=1 , n , a=1;
	printf("enter value of n : ");
	scanf("%d",&n);
	for ( i==1 ; i<=n ; i++ ){ a *= i; }
	printf("%d factorial is %d",n , a);
	return 0;
}
