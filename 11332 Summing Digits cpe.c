#include <stdio.h>

int summing(int n) //用函數 
{
	int sum=0;
	while(n>0)
	{
		sum=sum+(n%10);
		n/=10;
	}
	return sum;
}

int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		while(n>9)
		{
			if(n>9)
			{
				n=summing(n); //只要大於10就要帶入函數中繼續跑 
			}
		}
		
		printf("%d\n",n);
	}
	return 0;
}
