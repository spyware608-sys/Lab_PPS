#include<stdio.h>
int main(){
	int x,y ;
	printf("enter values of x and y \n" );
	scanf("%d %d", &x, &y );
	int result=(x>y) ? x : y ;
	printf("larger number is %d", result);
	
	return 0;
}
