#include<stdio.h>
int main()
{
	/* Klavyeden girilen n tamsayi adedi kadar fibonacci serisi üreten program.*/

	int num,i,number1,number2,conclusion;
	printf("Enter a number please= ");
	scanf("%d",&num);
	
	
	for(i=1;i<=num;i++)
	{	
		conclusion=number1+number2;
		number1=number2;
		number2=conclusion;
		
		printf("%d ",conclusion);

		}	
		

	return 0;	
	
}