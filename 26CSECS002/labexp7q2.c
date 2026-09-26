#include <stdio.h>
#include <math.h>
int main (){
	float x , n , sum=1;
	int i , j , sign;
	
	printf("enter number x = ");
	scanf("%f",&x);
	printf("enter number n = ");
	scanf("%f",&n);
	
	for ( i=2 ; i<=n ; i = i+2){
		float p = pow(x , i);
		float fact = 1 ;
		for( j=1 ; j<=i ; j++ ){
			fact = fact * j ;
		}
		float res = p / fact ;
		sum = sum + (sign*res);
		if ( sign == -1 ){
			sign = 1 ;
		}
		else 
			sign = -1 ;
	}
	printf("sum of series = %f",sum);
	
	return 0;
}

