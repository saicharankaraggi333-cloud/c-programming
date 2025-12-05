#include<stdio.h>
int main()
{
	int i,n;
	int factorcount=0;
	printf("Enter i,n values\n");
	scanf("%d%d",&i,&n);
	for(i;i<=n;i++)
	if(n%i==0)
	{
		factorcount++;
    }
			if(factorcount==2)
		{
		printf(" a prime number\n");
	}
	
	else{
		printf(" not a prime number\n");
	}
}
