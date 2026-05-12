//C++
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		break;
		int sum;
		while(n>=10)
		{
			sum=0;
			while(n!=0)
			{
				sum+=n%10;
				n/=10;
			}
			n=sum;
		}
		cout<<n<<endl;
	}

	return 0;
}
//C語言
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
