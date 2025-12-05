#include<stdio.h>
int main()
{
	int n;
	int digit_count=0;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(n>0)
	{ 			
    int ans=0;
    int r;
    r=n%10;
	ans=ans*10+r;
	printf("%d",ans);
	digit_count++;
	n=n/10;
    }
	return 0;	
}
