#include<stdio.h>
void add(); //function declaration if not declared will give compilation error
int main (){
	add(); //function calling or invoking
	return 0;
}

//function definition
void add(){
	int a,b,sum;
	printf("enter a and b : ");
	scanf("%d%d",&a,&b);
	sum = a+b ;
	printf("%d",sum);
}
