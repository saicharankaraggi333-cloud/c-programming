#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a,b values\n");
	scanf("%d%d",&a,&b);
	int r=2;
	int LCM=1;
	int GCD;
	int product=a*b;
	while(r<=a && r<=b)
		if(a%r==0 && b%r==0)
		{
			a=a/r;
			b=b/r;
			LCM=LCM*r;
		}
		else
		{
			r++;
		}
	LCM=LCM*a*b;
	GCD=product/LCM;
	printf("GCD=%d",GCD);
	return 0;
}
