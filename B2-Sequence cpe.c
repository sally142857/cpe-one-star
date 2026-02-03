#include <stdio.h>

int main()
{
	int n;
	char ch;
	int time=0;
	while(scanf("%d",&n)!=EOF)
	{
		int arr[101]={0};
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]); //块 
		}
		
		int flag=1; //絋﹚琌B2
		
		//ぃ琌金 
		if(arr[0]<1)
		{
			flag=0;
		}
		else
		{
			for(int j=1;j<n;j++)
			{
				if(arr[j]<1||arr[j-1]>=arr[j])
				{
					flag=0;
					break;
				}
			}
		}
		
		if(flag==1)
		{
			int cheak[20001]={0};
			for(int i=0;i<n;i++) //B2﹚竡 (﹚竡计いヴ種ㄢ计羆㎝常ぃ狡)
			                     //ex.计琌 1 2
								 //1+1=2,1+2=3,2+2=4 (2,3,4) =>⊿Τ狡碞琌B2 
			{
				for(int j=i;j<n;j++)
				{
					int sum=arr[i]+arr[j];
					if(cheak[sum]==1)
					{
						flag=0; //┤Τ簗呼ぇ辰 
						break;
					}
					else
					{
						cheak[sum]=1;
					}
				}
				if(flag==0) 
				{
					break;	
				}
			}
			
		} 
	
		time++;
		if(flag)
		{
			printf("Case #%d: It is a B2-Sequence.\n",time);
		}
		else
		{
			printf("Case #%d: It is not a B2-Sequence.\n",time);
		}
		
	}
	return 0;	
} 
