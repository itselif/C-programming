#include<stdio.h>
int main()
{
	/* The program that finds the sum and average of the salaries of n personnel working in an educational institution
	with -do-while-
	Bir egitim kurumunda çalisan n tane personele ait maaslarin toplamini ve ortalamasini bulan program 
	-do-while ile-*/
	
	int employee,wage,total=0,i;
	float average;
	printf("Enter the number of staff:  ");
	scanf("%d",&employee);
	printf("\n");
	
/*	for (i=1;i<=employee;i++)
	{
		printf("Enter the salary of the %dst. employee= ",i);
		scanf("%d",&wage);
		total=total+wage;
	}
	average=total/employee;
	printf("\nTotal salary of staff= %d\nAverage salary of staff= % .2f", total, average);
*/
	i=1;	
	do 
	{
		printf("Enter the salary of the %dst. employee= ",i);
		scanf("%d",&wage);
		i++;
		
		total=total+wage;
		
	}
	while (i<=employee);

	average=(float)total/employee;  //BURADA FLOAT YAZMADAN ONCE CALISMAMISTI. INT OLARAK HESAP YAPIYORDU.	
	printf("\nTotal salary of staff= %d\nAverage salary of staff= % .2f", total,average);	

return 0;
	
}