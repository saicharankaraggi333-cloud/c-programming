#include<stdio.h>
int main()
{
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	if(n>99 && n<1000)
	{
		printf(" three digit number\n");
	}
	else
	{
		printf(" not three digit number\n");
	}
	return 0;
}
