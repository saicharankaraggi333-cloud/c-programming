#include<stdio.h>
#include<math.h>
int main()
{
	int min,sec,hours;
	printf("Enter hours\n");
	scanf("%d",&hours);
	min=hours*60;
	sec=hours*3600;
	printf("min=%d",min);
	printf("sec=%d",sec);
	return 0;
}
