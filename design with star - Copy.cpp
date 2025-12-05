#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=k+1;j++)
		{
			printf("* ");
		}
		k+=2;
		for(j=1;j<=5;j++)
		{
			printf("  ");
		}
		printf("\n");
	}
}
