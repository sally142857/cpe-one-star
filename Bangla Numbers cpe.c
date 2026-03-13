#include <stdio.h>

void cheak(long long n)
{
	if((n/10000000)>0)
	{
		cheak(n/10000000); //用遞迴來拆分數字 
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
		printf(" %lld",n); //負責印出數字(遞迴的數字都是從這邊印出來的) 
	}
}

int main()
{
	long long n;
	int i=1; //編號
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0) //測資可能是0 
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

