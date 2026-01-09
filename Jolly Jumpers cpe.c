#include <stdio.h> 
#include <stdlib.h>
 
int main()
{
	int n,m,temp;
	int arr[3000]={0}; //計算差值 
	int i,j,x,y,count; 
	count=0;
	temp=0;
	i=0;
	
	while(scanf("%d",&m)!=EOF)
	{
		if(count==0)
		{
			n=m;
		}
		if(count>=2)
		{
			arr[i]=abs(temp-m);
			i++;
		}
		temp=m;
		count++;
		
		int diff[3000]={0}; //紀錄1~n-1出現次數 
		
		if(count==n+1) //判斷是否已經輸入n個數 
		{
			for(x=0;x<n-1;x++)
			{
				for(j=n-1;j>=1;j--)
				{
					if(arr[x]==j)
					{
						diff[j]++; //在該數的位置++，可以判斷重複 
					}
				}
			}
			
			int flag=0; //判斷是否有重複 
			for(j=0;j<n-1;j++)
			{
				if(diff[j]>=2)
				{
					flag=0;
					break;
				}
				else
				{
					flag=1;
				}
			}
			
			if(flag)
			{
				printf("Jolly\n");
			}
			else
			{
				printf("Not jolly\n");
			}
			
			i=0;       //初始化 
			countA=0;
			countB=0;
			temp=0;
		}
	
	}

	return 0;
} 

