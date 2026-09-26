//PROGRAM TO PERFORM MULTIPLICATION OF TWO NUMBERS

//START
//DECLARE A,B
//INPUT A,B
//MULTIPLY A AND B AND ASSIGN IT TO C
//PRINT C
//STOP

#include<stdio.h>
int main(){
	int a, b, c;
	
	printf("enter multiplicand : ");
	scanf("%d",&a);
	
	printf("enter multiplyer : ");
	scanf("%d",&b);
	
	c = a*b;
	
	printf("the product is %d",c);
	
	return 0;
}
