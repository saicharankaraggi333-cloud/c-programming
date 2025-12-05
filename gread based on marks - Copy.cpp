#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	printf("Enter a value\n");
	scanf("%d",&a);
	if(a>90)
	{
		printf("A grade");
	}
	else if(a<90&&a>75)
	{
		printf("B grade");
	}
	else if(a<75&&a>60)
	{
		printf("C grade");
	}
	else
	{
		printf(" fail");
	}
	return 0;
}
