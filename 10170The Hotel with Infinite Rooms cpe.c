#include <stdio.h>

int main()
{
	long long s,d;
	
	while(scanf("%lld %lld",&s,&d)!=EOF)
	{
		long long copyS=s;
		long long copyD=d;
		while(copyD>0)
		{
			copyD-=copyS;
			if(copyD>0)
			{
				copyS++;
			}
		}
		printf("%lld\n",copyS);
	}
	
	return 0;
}
