#include <stdio.h>

int main()
{
	int m,n;
	char map[101][101]={0};
	int dx[] = {-1,-1,-1,0,0,1,1,1}; //上-1 下+1 
	int dy[] = {-1,0,1,-1,1,-1,0,1}; //左-1 右+1 
	int caseNum = 1;
	
	while(scanf("%d %d",&n,&m)&&(m!=0||n!=0))
	{
		for(int i=0;i<n;i++)
		{
			scanf("%s",map[i]);
		}
		
		if(caseNum>1)
		{
			printf("\n");
		}
		printf("Field #%d:\n", caseNum++); // 印出這是第幾組 Field
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(map[i][j]=='*')
				{
					printf("*");
				}
				else
				{
					int count=0; //計算地雷數量
					for(int k=0;k<8;k++)
					{
						int nx=i+dx[k];
						int ny=j+dy[k];
						
						if(nx>=0&&nx<n&&ny>=0&&ny<m)
						{
							if(map[nx][ny]=='*')
							{
								count++;	
							}	
						} 
					}
					printf("%d",count);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
