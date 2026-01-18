#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	while(n--)
	{
		int r;
		scanf("%d",&r);
		
		int arr[3000]={0};
		for(int i=0;i<r;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<r-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;	
				}
			}
		}
		
		int mid;
		int x=r;
		if(x%2==0)
		{
			x/=2;
			mid=(arr[x-1]+arr[x])/2;
		}
		else
		{
			x/=2;
			mid=arr[x];
		}
		int sum=0;
		for(int i=0;i<r;i++)
		{
			sum+=abs(arr[i]-mid);
		}
		printf("%d\n",sum);
	}
	return 0;
} 
