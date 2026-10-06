//WAP to check wheathe given number is armstrong or not

#include<stdio.h>
#include<math.h>
int main (){
	int n ,n2;
	printf("enter number n : ");
	scanf("%d",&n);
	n2 = n;
	int y ,c ,i;
	do{
		int x = n%10;
		c++;
// write program to do the exponent using for loop right here	
//		y = y + x^c;
		n = n/10;		
	}while( n != 0);
	if ( y == n2 )
		{ printf("%d is an armstrong number",n2); }
	else
		{ printf("%d is not an armstrong number",n2); }
	return 0;
}
