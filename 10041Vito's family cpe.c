//C++版本
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int time=0;
	cin>>time;
	while(time--)
	{
		int r,sum=0;
		cin>>r;
		int arr[501];
		for(int i=0;i<r;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+r);
		int mid=arr[r/2];
		
		for(int i=0;i<r;i++)
		{
			sum+=abs(arr[i]-mid);
		}
		cout<<sum<<endl;
	}
	return 0;	
} 

//C語言版本
// #include <stdio.h>
// #include <math.h>

// int main()
// {
// 	int n;
// 	scanf("%d",&n);
	
// 	while(n--)
// 	{
// 		int r;
// 		scanf("%d",&r);
		
// 		int arr[3000]={0};
// 		for(int i=0;i<r;i++)
// 		{
// 			scanf("%d",&arr[i]);
// 		}
		
// 		for(int i=0;i<r;i++)
// 		{
// 			for(int j=0;j<r-1;j++)
// 			{
// 				if(arr[j]>arr[j+1]) //排序，方便之後找中位數
// 				{
// 					int temp=arr[j];
// 					arr[j]=arr[j+1];
// 					arr[j+1]=temp;	
// 				}
// 			}
// 		}
		
// 		int mid;
// 		int x=r;
// 		if(x%2==0) //找中位數
// 		{
// 			x/=2;
// 			mid=(arr[x-1]+arr[x])/2;
// 		}
// 		else
// 		{
// 			x/=2;
// 			mid=arr[x];
// 		}
// 		//計算和
// 		int sum=0;
// 		for(int i=0;i<r;i++)
// 		{
// 			sum+=abs(arr[i]-mid);
// 		}
// 		printf("%d\n",sum);
// 	}
// 	return 0;
// } 

