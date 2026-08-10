//C++
#include <bits/stdc++.h>
using namespace std;

int cal(int n,int m) //檢查是否合規
{
	if(n==0||m==0||n==1||m==1)
	{
		return 0;
	}
	if(n<m)
	{
		return 0;
	}
	while(n>1)
	{
		if(n%m==0&&n%m<n)
		{
			n/=m;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n,m,flag;
	while(cin>>n>>m)
	{
		flag=cal(n,m); //檢查
		if(flag)
		{
			cout<<n;
			while(n>1) //印出數字
			{
				n/=m;
				cout<<" "<<n;
			}
			cout<<"\n";
		}
		else
		{
			cout<<"Boring!\n";
		}
	}
	return 0;	
} 
//C語言
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
