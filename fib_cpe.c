#include <stdio.h>

int main()
{
	int n;
	int dec_b[100];
	int fib_b[40]={0,1};

	int i,j,m;
	for (i=2;i<40;i++)
	{
		fib_b[i]=fib_b[i-1]+fib_b[i-2];
	}

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		printf("%d = ",m);
		
		int cheak;
		cheak=0;
		int base[41]={0};
		
		for(j=39;j>=2;j--)
		{
			if(m-fib_b[j]>=0)
			{
				cheak=1;
				if(base[j+1]!=1) //為了強制執行「斐波那契數制中不能有兩個相鄰的 1」
				{
					base[j]=1;
					m-=fib_b[j];
				}
			}
			if(cheak==1)
			{
				printf("%d",base[j]);
			}
		}
		printf(" (fib)\n");
		
	}
		
	return 0;
}
