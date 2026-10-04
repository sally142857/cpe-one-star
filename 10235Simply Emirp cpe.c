//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		int flag=1;
		//確定質數或合數 
		for(int i=2;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		} 
		//二階段確認質數
		if(flag)
		{
			//n翻轉成rev
			int temp=n,rev=0;
			while(temp>0)
			{
				rev=rev*10+temp%10;
				temp/=10;
			} 
			//確認翻轉後是否為同一個數
			int key=1;
			if(rev==n)
			{
				flag=1;
				key=0;
			} 
			//判斷rev是否為質數
			for(int i=2;(i<=sqrt(rev))&&(key==1);i++)
			{
				if(rev%i==0)
				{
					flag=1; //條件二 n是質數但rev不是 
					break;
				}
				else
				{
					flag=2; //條件都達成 
				}
			} 
		} 
		if(flag==0)
		{
			cout<<n<<" is not prime.\n";
		}
		else if(flag==1)
		{
			cout<<n<<" is prime.\n";
		}
		else
		{
			cout<<n<<" is emirp.\n";
		}
	}
	return 0;	
} 
//C語言
#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==2)
		{
			printf("%d is prime.\n",n);
		}
		else
		{
			int i=2;
			int cheak=1;
			int copyN=n;
			for (int i = 2; i * i <= copyN; i++)
			{
				if(copyN%i==0)
				{
					cheak=0;
					printf("%d is not prime.\n",n);
					break;
				}
			}
			
			if(cheak)
			{
				copyN=n;
				int chN=0;
				while(copyN>0)
				{
					int temp=copyN%10;
					chN=temp+chN*10;
					copyN/=10;
				}
				
				for (int i = 2; i * i <= chN; i++)
				{
					cheak=1;
					if(chN%i==0)
					{
						cheak=0;
						printf("%d is prime.\n",n);
						break;
					}
					if(chN==n)
					{
						cheak=0;
						printf("%d is prime.\n",n);
						break;
					}
				}
				if(cheak)
				{
					printf("%d is emirp.\n",n);
				}
			
			}
		}
	}
	
	return 0;	
} 
