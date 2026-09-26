#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter coefficient a,b and c:")
	scanf("%d %d %d",&a,&b,&c);
	
	d=b*b - 4*a*c;
	
	if(d>0)
	{
	 root1 = (-b + sqrt(d)) / (2.0 * a);
        root2 = (-b - sqrt(d)) / (2.0 * a);

        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
	}
	else if (d == 0)
    {
        root1 = -b / (2.0 * a);

        printf("Both roots are equal.\n");
        printf("Root = %.2lf\n", root1);
    }
    else
    {
        printf("Roots are imaginary.\n");
    }

    return 0;
}
