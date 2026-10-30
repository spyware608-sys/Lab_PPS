//WAP to input 3 coefficient of a quadratic equation and find real solutions to the equation

#include<stdio.h>
#include<math.h>
int main()
{	printf("enter the coefficients of the quadratic equation \n");
	int a, b, c;
	printf("enter a : "); scanf("%d",&a);
	printf("enter b : "); scanf("%d",&b);
	printf("enter c : "); scanf("%d",&c);
	int d, x1, x2; d = sqrt(( b * b) - (4 * a * c));
	
	if (d > 0)
	{	x1 = (-b + d ) / (2*a);
		x2 = (-b - d ) / (2*a);
		printf("the two real distinct roots are %d %d", x1 , x2); }
	else if (d == 0)
	{	x1 = (-b) / (2*a);
		x2 = (-b) / (2*a);
		printf("the roots are real and equal %d", x1); }
	else printf("the roots are not real");
	
	return 0;
}
