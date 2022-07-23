#include<stdio.h>
int main()
{
	/* taban uzunluðu ve yüksekligi girilen üçgenin alanini hesaplayan program 
	Calculating the area of a triangle with base length and height*/
	
	int base_lenght,hight,area;
	
	printf("Please enter the base lenght of triangle.\n");
	scanf("%d",&base_lenght);
	
	printf("Please enter the hight of triangle.\n");
	scanf("%d",&hight);
	
	area=base_lenght*hight/2;
	
	printf("area of the triangle is= %d cm",area);


	return 0;
} 