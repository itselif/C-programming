#include<stdio.h>
int main()
{

	
float hour;

printf("what time is it? ");

scanf("%f",&hour);
	
	if (hour>=12 && hour<18)
		printf("PM");
		
	else if (hour>=18 && hour<24)
		printf("AM");
				
	else 
		printf("you entered wrong value ");
	
		return 0;
}