//

#include<stdio.h>
int sumdigits();
int main() {
	int n ;
	printf("enter number : ");
	scanf("%d",&n);
	int result1 = sumdigits();
	printf("sum of digits is %d",result1);
	return 0;
}
int sumdigits(){
	int n , y ;
	while( n != 0){
		int x = n%10;
		y = y+x;
		n = n/10;		
	}
	return y;
}
