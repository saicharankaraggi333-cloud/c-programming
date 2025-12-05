#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x,y values\n");
    scanf("%d%d",&x,&y);
	while(x>0){
		if(x<y){
			int z=x;
			x=y;
			y=x;
		}
		x=x%y;
	}	
	printf("%d",y);
}
