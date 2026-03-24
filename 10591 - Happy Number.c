#include <stdio.h>

int main()
{
	int t,i,n;
	scanf("%d",&t);
	
	for(i=1;i<=t;i++)
	{
		int flag=1;
		scanf("%d",&n);
		int copyN=n;
		int sum=0;
		int temp;
		int seen[1000]={0};
		
		while(1)
		{
			sum=0; 
			
			//判斷Happy number 
			while(copyN>0)
			{
				temp=copyN%10;
				sum+=temp*temp;
				copyN/=10;
			}
			
			//方法一(套公式) 
//			if(sum==4)
//			{
//				flag=0
//				break;
//			}
			//方法二 
			if(seen[sum]==1)
			{
				flag=0;
				break;
			}
			else if(sum==1)
			{
				break;
			}
			else
			{	
				copyN=sum;
				seen[sum]=1;
			}
		}
		
		if(flag)
		{
			printf("Case #%d: %d is a Happy number.\n",i,n);
		}
		else
		{
			printf("Case #%d: %d is an Unhappy number.\n",i,n);
		}
	}
	return 0;
}
