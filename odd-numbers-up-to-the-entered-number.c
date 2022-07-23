#include<stdio.h>
int main()
{
	/* Program that prints the odd numbers up to n entered by the user. */
	
	int num,i;
	
	printf("Enter the number please.= ");
	scanf("%d",&num);
	
	printf("odd numbers up to %d = ",num); 
	for(i=0;i<=num;i++){ 
		
		if (i%2!=0){
			
			printf("%d ",i);	
		} 
	}

	 
	
	return 0;
}