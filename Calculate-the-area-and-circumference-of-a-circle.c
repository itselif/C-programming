#include<stdio.h>
int main()
{
	/*
	Yaricapi klavyeden girilen dairenin alani ve çevresini hesaplama	
	Area and circumference of circle in c program
	
	Area = 3.14 * radius * radius.
	Circumference = 2 * 3.14 * radius.*/
	
	
	float radius,area,circumference;
	printf("Please enter the radius of circle.");
	scanf("%f",&radius);
	
	area= 3.14* pow(radius,2);
	circumference= 2*3.14*radius;
	
	printf("The area of circle is= %.2f\n",area);
	printf("The circumference of circle is= %.2f",circumference);
	

	return 0;
}
