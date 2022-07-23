#include<stdio.h>
int main()
{
    /*  Sort the 15 entered numbers according to the user's request(from largest to smallest OR smallest to largest)  */

    int num[15];
    int i=0,j,temp;
    char selection;
    
    printf("Enter the numbers you want the sort.\n");
    for(;i<15;i++)
    {
        printf("number %d= ",i+1);
        scanf("%d",&num[i]);
    }
 
    printf("\nHow would you prefer your numbers to be sorted?\n *Press 'a' if largest to smallest\n *Press 'b' if smallest to largest \n");

    while(selection!='a'&& selection!='A'&& selection!='b'&& selection!='B')
    {
     scanf("%c",&selection);
    
        switch (selection)
        {
            case 'a':
            case 'A':
                for(i=0;i<15;i++)              
                {  
                    for(j=0;j<15;j++)      /*to compare numbers with each other */
                    {
                        if(num[i]>=num[j])
                        {
                            temp=num[i];
                            num[i]=num[j];      /*we assigned the big number to the small number*/
                            num[j]=temp;        /*we assigned the small number to temp */
                        }
                    }
                }
                printf("\nSort of numbers from largest to smallest =  ");
                    for(i=0;i<15;i++)
                    {
                        printf("%d ",num[i]);
                    }        
             break;
        
            case'b':
            case'B':
                for(i=0;i<15;i++)
                {
                    for(j=0;j<15;j++)
                    {
                        if(num[i]<=num[j])
                        {
                            temp=num[i];
                            num[i]=num[j];
                            num[j]=temp;
                        }
                    }
                }
                printf("\nSort of the numbers from smallest to largest =   ");
                    for(i=0;i<15;i++)
                    {
                        printf("%d  ",num[i]);
                    }
             
             break;

            default:
                printf("\nPlease enter a valid letter. (a or b) ");
                break;
        }
    }
    return 0;
}