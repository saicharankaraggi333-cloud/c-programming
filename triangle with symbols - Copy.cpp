#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		    if(i == j)
		    {
			 printf("* \n");
			}	
			else if(i == 5)
			{
				printf("* ");
			}
			else if(j==1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
	}
}
