//WAP to write cube of each number between 1 to N

#include<stdio.h>
int main(){
	int i , n ;
	printf("enter n : ");
	scanf("%d",&n);
	
	for(i=1; i<=n ;i++)
	{
		int a;
		a = i * ( i * i);
		printf("cube of %d is %d \n", i, a);
	}
	
	return 0;
}
