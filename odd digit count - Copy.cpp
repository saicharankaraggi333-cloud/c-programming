#include<stdio.h>
int main()
{
	int digit_count=0;
	int n;
	printf("Enter n value\n");
	scanf("%d",&n);
	while(n>0){
		digit_count++;
		n=n/10;
		int i;
		i=digit_count%2;
		if(i==1)	
		printf("%d\n",digit_count);
		}
}
