#include<stdio.h>
int main()
{
	/* Program that compares two numbers entered from the keyboard */
	
	int num1,num2;
	printf("Enter the first number=");
	scanf("%d",&num1);
	
	printf("Enter the second number=");
	scanf("%d",&num2);
	
	if(num1>num2)
		printf("Number 1 is bigger than number 2");
		
	else
		printf("Number 1 is smaller than number 2");

	return 0;
} 
