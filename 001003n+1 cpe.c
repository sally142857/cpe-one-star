//C++
#include <iostream>
#include <cstdio> 
#include <utility>
using namespace std;

int main()
{
	int i,j;
	
	while(cin>>i>>j)
	{
		int org_i=i;
		int org_j=j;
		int max=0;
		if(i>j)
		{
			swap(i,j);		
		}
		
		for(long long n=i;n<=j;n++)
		{
			int count=1;
			long long m=n;
			while(m!=1)
			{
				if(m%2!=0)
				{
					m=3*m+1;
					count++;
				}
				else if(m%2==0)
				{
					m/=2;
					count++;
				}
			}
			if(max<count)
			{
				max=count;
			}
		}
		printf("%d %d %d\n",org_i,org_j,max);
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
