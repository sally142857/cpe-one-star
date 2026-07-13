//C++
#include <iostream> 
#include <utility> //這個是swap的標頭檔
#include <bits/stdc++.h> //其實有這個就好
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int x=a,y=b;
		int max=0;
		if(a>b)
		{
			swap(a,b);
		}
		for(int i=a;i<=b;i++)
		{
			int n=i;
			int count=1;
			while(n!=1)
			{
				if(n%2!=0)
				{
					n=3*n+1;
					count++;
				}
				else
				{
					n/=2;
					count++;
				}
			}
			if(max<count)
			{
				max=count;
			}
		}
		cout<<x<<" "<<y<<" "<<max<<endl;
	}
	return 0;	
} 
//C語言
#include <stdio.h>

int main()
{
	int i,j;
	long long n,m;
	int count,temp,max;
	
	while(scanf("%d %d",&i,&j)!=EOF)
	{
		max=0;
		int org_i=i;
		int org_j=j;
		
		if(i>j) //確保j>i 
		{
			temp=j;
			j=i;
			i=temp;
		}
	
		for(n=i;n<=j;n++) //將i存進n裡面，確保i的數據不會遺失
		                 //用n<j來計算[i,j]範圍內的數 
		{
			count=1; //將計數初始化
			m=n; //確保n的值不變(如果n直接帶入while會亂掉) 
			
			while(m!=1) //在m=1之前會一直跑下去，用m下去跑3n+1的運算 
			{
				if(m%2!=0) //n為奇數 
				{
					m=(3*m)+1;
					count++; //計算數量(每算一次就+1) 
				}
				else //n為偶數 
				{
					m=m/2;
					count++;//計算數量
				}
			}
			if(max<count)
			{
				max=count; //找出最大 
			}
		}
		printf("%d %d %d\n",org_i,org_j,max);
	}
	
	return 0;	
} 
