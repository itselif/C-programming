#include<stdio.h>
int main()
{
	/* Klavyeden girilen n sayisina ait çarpim tablosunu ekranda listeleme*/

	int i,j,num;
	
	printf("Which number would you like to see its value in the multiplication table?  ");
	scanf("%d",&num);

/*	for(i=num;i<=num;i++)
	{
	
		for(j=0;j<=10;j++)
		{
			printf("%d * %d = %d\n",i,j, i*j);
	
		}
	
	} */
	


	for(i=1;i<=10;i++)
	printf("%d x %d = %d\n",i,num,i*num);	//(Shorter solution)
		
return 0;
	
}