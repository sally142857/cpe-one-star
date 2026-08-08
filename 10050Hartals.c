//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T,D,P;
	cin>>T;
	while(T--)
	{
		cin>>D;
		cin>>P;
		int h[105]; //政黨罷會間格天數
		//輸入
		for(int i=0;i<P;i++)
		{
			cin>>h[i];
		}
		//檢查
		int table[3655]={0},k; //日期
		for(int i=0;i<P;i++)
		{
			k=1;
			for(int j=h[i];j<=D;j=h[i]*k)
			{
				if(j%7!=6&&j%7!=0)
				{
					table[j]=1;
				}
				k++;
			}
		} 
		int cnt=0;
		for(int i=1;i<=D;i++)
		{
			if(table[i]==1)
			{
				cnt++;
			}
		}
		cout<<cnt<<endl;
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
