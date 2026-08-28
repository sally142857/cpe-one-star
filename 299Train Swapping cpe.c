//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int arr[51]={0};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		//逆序數對
		int count=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(arr[i]<arr[j])
				{
					count++;
				}
			}
		}
		cout<<"Optimal train swapping takes "<<count<<" swaps.\n";
	}
	return 0;	
} 
//C語言
#include <stdio.h>

int main()
{
	int n,i,j,x,y;
	scanf("%d",&n);
	int lon;
	int arr[50];
	i=0; //計要輸入幾次 
	
	int count;
	while(i<n)
	{
		count=0;
		scanf("%d",&lon);
		for(j=0;j<lon;j++)
		{
			scanf("%d",&arr[j]);
		}
		
		for (x = 0; x < lon-1 ; x++) //總共要幾趟(有n個數就跑n-1趟) 
		{
			//一趟冒泡程序(單個數) 
			for (y = 0; y < lon - 1 - x; y++)
			{
				if(arr[y]>arr[y+1])  //因為是從小排到大，所以要判斷一下 
				{
					//交換
					int tmp = arr[y];
					arr[y] = arr[y + 1];
					arr[y + 1] = tmp;
					
					count++;       //計數 
				}
			}
			
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
		
		i++;
	}	
	return 0;
} 
