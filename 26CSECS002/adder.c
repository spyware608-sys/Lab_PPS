//PROGRAM TO PERFORM SUM OF TWO NUMBERS

//start
//declare a,b,c
//take input a,b
//add a,b and assign it to c
//print c
//stop

#include<stdio.h>
int main(){
	int a, b, c;
	
	printf("enter first number : ");
	scanf("%d",&a);
	
	printf("enter second number : ");
	scanf("%d",&b);
	
	c = a+b;
	
	printf("sum of entered numbers is %d",c);
	
	return 0;
}
