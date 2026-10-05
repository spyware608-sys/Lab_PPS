//program using function to find factorial of a given number

#include<stdio.h>
void factorial();
int main(){
	factorial();
	return 0;
}
void factorial(){
	int i , n , a=1;
	printf("enter value of n : ");
	scanf("%d",&n);
	for ( i=1 ; i<=n ; i++ ){ a *= i; }
	printf("%d factorial is %d",n , a);
}
