#include <stdio.h>

int main()
{
	int n;
	int s,d;
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d %d",&s,&d);
		int scoreA=s;
		int scoreB=0;
		
		int cheak=1;
		while((scoreA-scoreB)!=d)
		{
			if((scoreA-scoreB)!=d)
			{
				scoreA--;
				scoreB++;
			}
			if(scoreA==0 && (scoreA-scoreB)!=d)
			{
				cheak=0;
				break;
			}
		}
		if(cheak)
		{
			printf("%d %d\n",scoreA,scoreB);
		}
		else
		{
			printf("impossible\n");
		}
	}
	return 0;
}
