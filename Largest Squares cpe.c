#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int m,n,q;
	
	
	while(t--)
	{
		scanf("%d %d %d",&m,&n,&q);
		char str[101][101]={0};
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf(" %c",&str[i][j]);
			}
		}
		int r,c;
		int copyQ=q;
		printf("%d %d %d\n",m,n,q);
		
		while(copyQ--)
		{
			scanf("%d %d",&r,&c);
			
			int radius = 0; //半徑 
			int max_L = 1; // 至少邊長是 1
			
			while(1)
			{
				int next_r= radius+1;
				
				//判斷向外一圈是否出界 
				if(r-next_r<0 || r+next_r>=m || c-next_r<0 ||c+next_r>=n)
				{
					break;
				} 
				
				//判斷周圍是否跟中心的字元一樣
				int cheak=1;
				for(int i=r-next_r ; i<=r+next_r ; i++) //從左到右檢查
				{
					for(int j=c-next_r ; j<=c+next_r ; j++)
					{
						if(str[i][j]!=str[r][c])
						{
							cheak=0;
							break;
						}
					}
					if(cheak==0)
					{
						break;	
					}	
				} 
				
				//繼續檢查下一圈 
				if(cheak)
				{
					radius++;
				}
				else
				{
					break;
				}		
			} 
			// 1(中心) + 2*(左右兩邊) <-因為是左右「兩」邊，所以*2 
			printf("%d\n",1+2*radius);
		}		
	}	
	return 0;
}
