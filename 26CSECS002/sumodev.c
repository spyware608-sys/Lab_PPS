//WAP to print sum of even and odd number between 1 to N

#include<stdio.h>
int main (){
	int i, n;
	int sum1=0 , sum2=0 ;
	printf("enter value of n : ");
	scanf("%d",&n);
	
	for ( i =1 ; i<=n ; i++ )
	{
		if (i%2==0)
			sum1 = sum1 + i;
		else 
			sum2 = sum2 + i;
	}
	printf("sum of even number is : %d \n",sum1);
	printf("sum of odd number is : %d",sum2);
	
	return 0;
}
