#include<stdio.h>
int main()
{
	/* 
	According to the year information entered by the user, whether the entered year is a leap year or not.
	finder program. (Leap year = February is the case of 29 days every 4 years.

	**Years that are a multiple of 4 are leap years.
	However, years that are a multiple of 100 are not leap years.
	Only years that are divisible by 400 are leap years.)

	TR:
	Kullanıcı tarafından girilen yıl bilgisine göre girilen yıkın artık yıl olup olmdığını
	bulan program. (Artık yıl= Şubat ayının 4 yılda bir 29 çekmesi durumudur.
	**4'ün katı olan yıllar artık yıllardır.
	Ancak, 100'ün katı olan yıllar artık yıl değildir.
	100'ün katı olan yıllardan sadece 400'e tam bölünebilen yıllar artık yıldır.) */
	
	int year, leap_year;
	
	printf("Enter the year please. ");
	scanf("%d",&year);
	
	if((year%4 == 0) && (year %100!=0))
		printf("This year is a leap year. ");
		
		else if(year%100==0 && year%400==0)
		printf("This year is a leap year. ");
		
			else 	
			printf("This year is not a leap year.");
	

	
	
	return 0;
}