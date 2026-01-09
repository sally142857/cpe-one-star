#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long n,m;
	
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		printf("%lld\n",llabs(n-m));
	}
	
	return 0;
}
