#include<stdio.h>
int main()
{
	/*Calculating the power of a number whose base and exponent values ​​are entered from the keyboard 
	(without using the pow() command) 
	Klavyeden taban ve üs deðeri girilen sayýnýn kuvvetini hesaplama (pow() komutu kullanmadan)*/

	int base, exponent,i,conclusion=1;
	printf("Enter the base value  ");
	scanf("%d",&base);
	
	printf("Enter the exponent value  ");	
	scanf("%d",&exponent);

	for (i=1;i<=exponent;i++)
	{
		conclusion=conclusion*base;
		
	}
	printf("%d ^ %d = %d ",base, exponent, conclusion);



return 0;
	
}