#include <stdio.h>

void cheak(long long n)
{
	if((n/10000000)>0)
	{
		cheak(n/10000000); //ノ患癹ㄓ╊だ计 
		printf(" kuti");
		n%=10000000;
	}
	if((n/100000)>0)
	{
		cheak(n/100000);
		printf(" lakh");
		n%=100000;
	}
	if((n/1000)>0)
	{
		cheak(n/1000);
		printf(" hajar");
		n%=1000;
	}
	if((n/100)>0)
	{
		cheak(n/100);
		printf(" shata");
		n%=100;
	}
	if(n>0)
	{
		printf(" %lld",n); //璽砫计(患癹计常琌眖硂娩ㄓ) 
	}
}

int main()
{
	long long n;
	int i=1;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0) //代戈琌0 
		{
			printf("%4d. %lld\n",i,n);
			i++;
			continue;
		}
		printf("%4d.",i);
		cheak(n);
		printf("\n");
		i++;
	}
	return 0;
}
