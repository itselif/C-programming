#include<stdio.h>
int main()
{
	/* Calculating the factorial of the pose integer entered from the keyboard
	Klavyeden girilen poz tamsayinin faktoriyelini hesaplama*/
	
	int num,i,fac=1;
	printf("Enter the number to be factored please. %d ",num);
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		fac=fac*i;
	}
	printf("%d",fac); 	

return 0;
	
}