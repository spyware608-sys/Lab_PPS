//PROGRAM TO PERFORM DIVISION OF TWO NUMBERS

//remember to update it and add the function to give output remainder

//START
//DECLARE A,B
//INPUT A,B
//DIVIDE A AND B AND ASSIGN IT TO C
//PRINT C
//STOP

#include<stdio.h>
int main(){
	int a, b, c;
	
	printf("enter dividend : ");
	scanf("%d",&a);
	
	printf("enter divisor : ");
	scanf("%d",&b);
	
	c = a/b;
	
	printf("the product is %d",c);
	
	return 0;
}
