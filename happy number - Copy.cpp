#include<stdio.h>
int main()
{
	int n=19;
	int res=0;
	while(n>0){
		int r=n%10;
		res=res+r*r;
		n=n/10;
		if(n==0)
		{
			n=res;
			res=0;
			if(n>=1 && n<=9)
			{
				break;
			}
		}
		if(n==1)
		{
			printf(" n is a happy number");
			break;
		}
	}
}
