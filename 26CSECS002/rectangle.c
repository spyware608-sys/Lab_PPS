//PROGRAM TO input 2 side lengths to get area and perimeter

//START
//DECLARE side1,side2,area,perimeter
//INPUT side1,side2
//FIND area,perimeter
//PRINT area,perimeter
//STOP

#include<stdio.h>
int main(){
	float side1, side2, area, perimeter;
	
	printf("enter length : ");
	scanf("%f",&side1);
	
	printf("enter breadth : ");
	scanf("%f",&side2);
	
	perimeter = 2*(side1 + side2);
	area = side1 * side2;
	
	printf("the area and perimeter are repectively %f %f", area, perimeter);
	
	return 0;
}
