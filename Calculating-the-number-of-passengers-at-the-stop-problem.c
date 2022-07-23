#include<stdio.h>
int main()
{
/* X ve Y noktalari arasinda 100 adet metro duragi bulunmaktadir. Her durak 1 den 100 e  kadar numaralandirilmiştir. 
Bir metro X noktasindan 1 yolcu alarak kalkmaktadir.  Her durakta durak numarasi kadar yolcu alarak yoluna devam 
etmektedir. Son durak Y oldugu için buradan yolcu almamaktadir.
Buna göre X duragindan kalkan metronun Y duragina kadar her durakta kaç yolcusunun olduðunu ve son duraga 
toplam kaç yolcu ile ulastigini hesaplayan program.*/
	
	int station=1,passenger=0,total=0;


/*	while (station<=100)
	{
		passenger=passenger+station;
		printf("Number of passengers at the %dst stop= %d\n ", station ,passenger);
		station++;
			total=total+passenger;
	}
	printf("total= %d", total);
*/

	for(station=1; station<=100;station++)
	{
		passenger=passenger+station;
			printf("Number of passengers at the %dst stop= %d\n ", station ,passenger);
		total=total+passenger;
		
	}
	printf("total= %d", total);



return 0;
	
}