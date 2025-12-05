#include<stdio.h>
#include<math.h>
int main()
{
	int days;
	printf("Enter days\n");
	scanf("%d",&days);
	int years=days/365;
	int weeks=(days%365)/7.0;
	float Days=(days%365)%7;
	printf("years=%d\n",years);
	printf("weeks=%d\n",weeks);
	printf("days=%f",Days);
	return 0;
}
