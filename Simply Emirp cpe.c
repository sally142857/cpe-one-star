#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==2)
		{
			printf("%d is prime.\n",n);
		}
		else
		{
			int i=2;
			int cheak=1;
			int copyN=n;
			for (int i = 2; i * i <= copyN; i++)
			{
				if(copyN%i==0)
				{
					cheak=0;
					printf("%d is not prime.\n",n);
					break;
				}
			}
			
			if(cheak)
			{
				copyN=n;
				int chN=0;
				while(copyN>0)
				{
					int temp=copyN%10;
					chN=temp+chN*10;
					copyN/=10;
				}
				
				for (int i = 2; i * i <= chN; i++)
				{
					cheak=1;
					if(chN%i==0)
					{
						cheak=0;
						printf("%d is prime.\n",n);
						break;
					}
					if(chN==n)
					{
						cheak=0;
						printf("%d is prime.\n",n);
						break;
					}
				}
				if(cheak)
				{
					printf("%d is emirp.\n",n);
				}
			
			}
		}
	}
	
	return 0;	
} 
