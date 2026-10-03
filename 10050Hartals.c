//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,p,h,count=0;
		int arr[3651]={0};
		cin>>n;
		cin>>p;
		while(p--)
		{
			cin>>h;
			int temp=h;
			while(temp<=n)
			{
				if(temp%7==6||temp%7==0)
				{
					temp+=h;
					continue;
				}
				else
				{
					if(arr[temp]==1)
					{
						temp+=h;
						continue;
					}
					else
					{
						arr[temp]=1;
						count++;
						temp+=h;
					}
				}
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
//C語言
#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t); //Á`¦@ 
	
	while(t--)
	{
		int n;
		scanf("%d",&n); //¤Ñ¼Æ 
		int p;
		scanf("%d",&p); //´X­ÓÄÒ 
		int arr[4000]={0};
		
		int count=0;
		for(int i=0;i<p;i++)
		{
			int x;
			scanf("%d",&x);
			for(int j=x;j<=n;j+=x)
			{
				if(j%7!=0 && j%7!=6)
				{
					if(arr[j]==0)
					{
						count++;
						arr[j]=1;
					}
				}
			}
		}
		printf("%d\n",count);
	}
	
	return 0;	
} 
