#include<stdio.h>
int main()
{
 /* It is a program that shows whether the number entered from the keyboard is greater than, less than or equal to 100. */
 
 int num;
 printf("Please enter a number\n");
 scanf("%d",&num);
 
 if(num==100)
 {
    printf("Your number=100\n");
 }

	else if (num>100)
	{
        printf("Your number is grater than 100");
	}	

		else
		{
            printf("Your number is less than 100");
		}
	
	
			
	
	
	return 0;
}