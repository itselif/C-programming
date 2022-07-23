#include<stdio.h>
int main()
{
	/* Klavyeden girilen karakterin kucuk ya da buyuk harf oldugunu bulan program
	Write a program to check whether the character is in lowercase or uppercase in C */
	
	char character;
	
	printf("Enter the character.");
	scanf("%c",&character);
	
	if (character>='a'&& character<='z')
	printf("lovercase");
	
	else if (character>='A' && character<='Z')
	printf("uppercase");

	
	
	return 0;