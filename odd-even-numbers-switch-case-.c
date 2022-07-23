#include<stdio.h>
int main()
{
	/* Sayinin tek/çift old. switch-case ile bulan program*/
	
	int num,conc;
	printf("Enter the number: ");
	scanf("%d",&num);
	conc=num%2;
	switch (conc)
	{
		case 0 : printf("sayi çift"); break;
		case 1 :  printf("sayi tek."); break;
	}	
	
	
		return 0;
}
