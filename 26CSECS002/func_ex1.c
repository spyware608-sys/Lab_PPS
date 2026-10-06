//program to find sum of digits of a number using functions
#include<stdio.h>
int main (){
	int y = digitsum();
	printf("sum of digits is %d",y);
	return 0;
}
int digitsum(){
	int n ,y;
	printf("enter number : ");
	scanf("%d",&n);
	while( n != 0){
		int x = n%10;
		y = y+x;
		n = n/10;		
	}
	return y;
}
