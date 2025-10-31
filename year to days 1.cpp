#include<stdio.h>
#include<math.h>
int main()
{
	int days;
	printf("enter days");
	scanf("%d",&days);
	int years=days/365.0;
	float week=(days%365)/7;
	int d=(days%365)%7;
	printf("years %d",years);
	printf("week %f",week);
	printf("days %d",days);
	return 0;

	
}
