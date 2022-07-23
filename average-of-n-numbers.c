#include<stdio.h>
int main()
{
	/* Klavyeden giriken n tane sayinin ortalamasini bulan program */
	
	
	int num_num,i,numbers;
	float average=0;
	printf("Enter the number of numbers you want to enter.");
	scanf("%d",&num_num);
	
	
	printf("Enter the numbers. \n");
	for (i=1; i<=num_num; i++){	
		printf("Enter the %d st number= ",i);	
		scanf("%d",&numbers);
		
		 //average=average+numbers;
		 average+=numbers;
	}	
	average=average/num_num;
	printf("Average of the numbers= % .2f",average);
	
	 
	
	return 0;
}