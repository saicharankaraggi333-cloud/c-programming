#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	int r=(n%5 && n%11);
	if(r==0)
    {
		printf("the number is divisible both 5&11");
	}
	else
	{
		printf("the number is not divisible by 5&11");
	}
	return 0;
}
