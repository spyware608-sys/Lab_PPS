//TO FIND AREA AND PERIMETER OF A CIRLE , INPUT IS RADIUS
#include<stdio.h>
int main(){
	float radi, area, perimeter;
	float pie=3.14;
	printf("Digits upto two decimal places are allowed \n");
	printf("enter radius : ");
	scanf("%f",&radi);
	area = pie*radi*radi;
	perimeter = 2*pie*radi;
	printf("area of circle is %f\n",area);
	printf("perimeter of circle is %f",perimeter);
	return 0;
}
