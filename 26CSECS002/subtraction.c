//PROGRAM TO PERFORM SUBTRACTION OF TWO NUMBERS

//START
//DECLARE A,B,C
//INPUT A,B
//SUBTRACT B FROM A AND ASSIGN IT TO C
//PRINT C
//STOP

#include<stdio.h>
int main(){
	int a, b, c;
	
	printf("enter subtraend : ");
	scanf("%d",&a);
	
	printf("enter minuend : ");
	scanf("%d",&b);
	
	c = a-b;
		
	printf("the difference is %d",c);
	
	return 0;
}
