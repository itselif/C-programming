#include<stdio.h>
int main()
{
	/* (Artik yil= subat ayinin 4 yilda bir 29 çekmesi durumudur.
	**4'ün kati olan yillar artik yillardir.
	Ancak, 100'ün kati olan yillar artik yil degildir.
	100'ün kati olan yillardan sadece 400'e tam bölünebilen yillar artik yildir.) 
	we will find the leap years between the range of two years like 2000 to 2020
	Kullanicinin girdigi yillar arasindaki yillardan artik yillari listeleyen program*/
	//((start_year%4==0) && ((start_year%400==0) || (start_year%100!=0))  )	;
	
	
	
	int start_year, end_year, leap_year,i;
	printf("Enter a year to start searching the leap years please: ");
	scanf("%d", &start_year);
	
	printf("Enter a year to end the search of leap years please: ");
	scanf("%d", &end_year);


/*	do
	{
		if(((start_year%4==0) && (start_year%100!=0)) || ((start_year%100==0) && (start_year%400==0)))
				{
				printf("%d\n",start_year);
				}		
		
		start_year++;
	}
	
	while (start_year<=end_year);  */
	
	for(i=start_year; i<=end_year;i++)
	{
		if(((i%4==0) && (i%100!=0)) || ((i%100==0) && (i%400==0)))
		printf("%d\n",i);
	}
	
	return 0;
}