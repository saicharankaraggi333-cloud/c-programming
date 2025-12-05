#include<stdio.h>
int main()
{
	int n,original,sum=0,digit;
	printf("Enter n value\n");
	scanf("%d",&n);
	original=n;
	while(n>0)
	{
		digit=n%10;
		sum+=digit*digit*digit;
		n=n/10;
	}
	if(sum==original)
	{
		printf("angstrom");
	}
	else
	{
		printf("not an angstrom");
	}
	return 0;
}
