#include<stdio.h>
int main()
{
	/* Print the sum of even numbers between the values ​​whose upper and lower bounds are entered. */
	
	int upper_limit,lower_limit,range,i,total=0;
	
	printf("Enter the lower limit please. ");
	scanf("%d",&lower_limit);
	
	printf("Enter the upper limit please. ");
	scanf("%d",&upper_limit);
	
	range=upper_limit-lower_limit;
	
	printf("Even numbers= ");
	for(i=1;i<range;i++){ //for(i=lower_limit; i<=lower;i++)
		
		if(i%2==0){
			
			printf(" %d ", i);
			total=total+i;
		}
	}
	printf("\nSum of the even numbers between %d - %d = %d\n ", lower_limit,upper_limit,total); 
	
	return 0;
}