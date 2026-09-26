//wap to perform sum of input numbers until the user input is zero

#include <stdio.h>
int main(){
	int num, sum=0 ;
	xyz:
	do{
		printf("enter number : ");
		scanf("%d",&num);
		sum += num ; // this is shortcut for sum = sum + num
	}while ( num != 0);
	printf("sum = %d\n",sum);
	goto xyz;
	return 0;
}
