#include <stdio.h>

int main()
{
	int l;
	
	while(scanf("%d",&l)!=EOF)
	{
		if(l==0)
		{
			break;
		}
		
		char fro[32]={0}; //璶块秈 
		char obv[32]={0}; //程眔(ぃノ琌は) 
		int count=0,all=0; //count璸衡1瞷Ω计all魁场计计秖 
		int temp=l;
		
		for(int i=0;temp>0;i++) //跑Θ秈 
		{
			if(temp%2==1)
			{
				count++;
			}
			obv[i]=temp%2+'0';
			temp/=2;
			all++;
		}
		
		int y=all-1;
		for(int x=0;x<all;x++)
		{
			fro[x]=obv[y];
			y--;
		}

		printf("The parity of %s is %d (mod 2).\n",fro,count);
	}
}
