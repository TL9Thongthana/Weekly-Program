//64010300
#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			++j;
		}
		printf("\n");
	}	
	return 0;
}
