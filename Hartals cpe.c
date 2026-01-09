#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t); //總共 
	
	while(t--)
	{
		int n;
		scanf("%d",&n); //天數 
		int p;
		scanf("%d",&p); //幾個黨 
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
