//WAP to write a program to print sum of digits of a given number

#include<stdio.h>
int main (){
	int n ,y;
	printf("enter number : ");
	scanf("%d",&n);
	while( n != 0){
		int x = n%10;
		y = y+x;
		n = n/10;		
	}
	printf("sum of digits is %d",y);
	return 0;
}
