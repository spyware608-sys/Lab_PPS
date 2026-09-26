#include<stdio.h>
int main (){
	int c , i , n;
	int a=0;
	int b=1;
	printf("enter number of terms : ");
	scanf("%d",&n);
	printf("%d %d ",a ,b);
	for (i==3 ; i<=n-2 ; i++){
		c = a+b ;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}
