//WAP to print all digits of given number
//remove space after %d in printf to turn this code to reverse digits of a number



// to count number of digits
#include<stdio.h>
int main (){
	int n ,c=0;
	printf("enter number : ");
	scanf("%d",&n);
	while( n != 0){
		int x = n%10;
//		printf("%d  ",x);
		c++;
		n = n/10;		
	}
	printf("number of digits = %d",c);
	return 0;
}
