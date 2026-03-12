#include<math.h>      
#include<string.h>    
#include<stdio.h>

int GCD(int x,int y)
{
	if(x%y==0)
	{
		return y;
	}
	else
	{
		return GCD(y,x%y);
	}
}

int main()
{
	int n,i,j;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		int G=0;
		for(i=1;i<n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				G+=GCD(i,j); //­pºâ1~n½d³òªºGCD©M 
			}
		}
		
		printf("%d\n",G);
	}
	return 0;
} 
