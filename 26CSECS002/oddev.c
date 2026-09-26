//WAP to check a number is odd or even

#include<stdio.h>
int main(){
	int x;
	printf("enter value of x ");
	scanf("%d", &x);
	int result = (x % 2 == 0) ?printf("number is even") :printf("number is odd");
	return 0;
}
