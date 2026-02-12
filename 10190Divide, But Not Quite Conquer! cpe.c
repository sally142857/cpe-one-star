#include <stdio.h>

int main()
{
	long long n,m;
	
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		long long arr[10000]={0};
		int i=1;
		int count=0;
		int cheak=1;
		arr[0]=n;
		
		if(m<=1 || n<m)
		{
			printf("Boring!\n");
			continue;
		}
		else
		{
			while(n>1)
			{
				if(n%m!=0)
				{
					cheak=0;
					printf("Boring!\n");
					break;
				}
				else
				{
					arr[i]=n/m;
					i++;
					count++;
					n/=m;	
				} 
			}
		}
		
		
		if(cheak)
		{
			int j;
			for(j=0;j<=count;j++)
			{
				printf("%lld",arr[j]);
				if(j!=count)
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		
	}
	return 0;
}
