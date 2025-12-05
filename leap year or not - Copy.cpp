#include<stdio.h>
#include<math.h>
int main()
{
	int year;
	printf(" Enter year\n");
	scanf("%d",&year);
	//int r=(year%4||year%400);
	if((year % 400 == 0)||(year %4 == 0) && (year % 100 !=0))
	{
		printf(" It's a leap year");
		
	}
	else
	{
		printf("It not a leap year");
	}
	return 0;
}
