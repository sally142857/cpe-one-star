#include <stdio.h>
#include <stdlib.h>

int arr[1000000];

int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF)
	{
		int m;
		int i=0;
		int x=n;
		int org_n=n;
		
		while(x--)
		{
			scanf("%d",&m);
			arr[i]=m;
			i++;
		}
		
		//±Æ§Ç¨ç¼Æ 
		qsort(arr, org_n, sizeof(int), compare);
		
		if(org_n%2==0)
		{
			n/=2;
			int mid=arr[n - 1];
			int same=0;
			for(int j = 0; j < org_n; j++) 
			{
                if(arr[j] >= arr[n - 1] && arr[j] <= arr[n]) 
				{
                    same++;
                }
            }
			
			int count=arr[n] - arr[n - 1] + 1;
			
			printf("%d %d %d\n",mid,same,count);
		}
		else
		{
			n/=2;
			int mid=arr[n];
			int same=0;
			for(int j=0;j<org_n;j++)
			{
				if(arr[j]==mid)
				{
					same++;	
				}	
			}	
		
			int count=1;
			
			printf("%d %d %d\n",mid,same,count);
		}
		
	}
	return 0;
}
