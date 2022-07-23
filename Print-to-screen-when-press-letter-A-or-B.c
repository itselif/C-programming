#include<stdio.h>

/* Program that says the letters (A and B) that the user presses. */

int main()
{
	char letter;

	printf("Please enter a letter (A or B)\n");

/*	do
	{
	    scanf("%c",&letter);
	
		switch (letter)
	    {
		    case 'A':
		    printf("You entered 'A'"); break;
		
		    case'B' :
		    printf("You entered 'B'"); break;
		
	    default:
		{
            printf("you entered an invalid character\n"); break;
		}
	    }
	
	}
	while (letter!='A'&& letter!='B' );	
	*/
	
	while (letter!='A'&& letter!='B' )	
	{
	scanf("%c",&letter);
	
		switch (letter)
	{
		case 'A':
		printf("You entered 'A'"); break;
		
		case'B' :
		printf("You entered 'B'"); break;	
	
		default:
		printf("you entered an invalid character\n");
		break;
	
	}
	
	}
	
	return 0;
}