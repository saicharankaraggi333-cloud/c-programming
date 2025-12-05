#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter i,n values\n");
	scanf("%d%d",&i,&n);
	for(i;i<=n;i++)
	if(n%i==0)
	{
		printf("%d is a factor of %d\n",i,n);
	}
	return 0;
}
