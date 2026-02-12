#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long n,m;
	
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		if(n>m)
		{
			printf("%lld\n",n-m);
		} 
		else
		{
			printf("%lld\n",m-n);
		}
	}
	
	return 0;
}
