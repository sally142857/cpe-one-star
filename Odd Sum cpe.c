#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int i=0;
	
	while(t--)
	{
		int a,b;
		int sum=0;
		scanf("%d",&a);
		scanf("%d",&b);
		
		while(a<=b)
		{
			if(a%2!=0)
			{
				sum+=a;
			}
			a++;
		}
		
		i++;
		printf("Case %d: %d\n",i,sum);
	}
	
	return 0;
}
