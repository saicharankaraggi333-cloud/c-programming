#include<stdio.h>
int main()
{
	int sec;
	printf("enter sec\n");
	scanf("%d",&sec);
	int hours=sec/3600;
	int min=sec/3600%60;
	int rsec=sec%3600%60;
	printf("hours=%d\n",hours);
	printf("min=%d\n",min);
	printf("rsec=%d\n",rsec);
	return 0;
}
