#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int mapx,mapy;
	scanf("%d %d",&mapx,&mapy); //其實就是地圖大小 
	
	int dir;
	int dx[]={0,1,0,-1}; //左右 
	int dy[]={1,0,-1,0}; //上下 
	int scent[55][55]={0};
	
	int x,y,i;
	char dir_c;
	char str[101];
	char dir_s[]={'N','E','S','W'};
	
	while(scanf("%d %d %c",&x,&y,&dir_c)!=EOF)
	{
		switch(dir_c)
		{
		case 'N':
			dir=0;
			break;
		case 'E':
			dir=1;
			break;
		case 'S':
			dir=2;
			break;
		case 'W':	
			dir=3;
			break;
		}
		
		scanf("%s",str);
		
		
		int len=strlen(str);
		int lost=0; //判斷機器人是否掉落
		
		for(i=0;i<len;i++)
		{
			if(str[i]=='R')
			{
				dir=(dir+1)%4; 
			}
			else if(str[i]=='L')
			{
				dir=(dir+3)%4;  //一個週期 (dir-1+3)%4 
			}
			else if(str[i]=='F')
			{
				int nx=x+dx[dir];
				int ny=y+dy[dir];
				
				if(nx<0 || nx>mapx || ny<0 || ny>mapy) //判斷是否出界 
				{
					if(scent[x][y]==1) //是否有機器人掉落過 
					{
						continue;
					}
					else
					{
						lost=1;
						scent[x][y]=1;
						break; //機器人掉落，不用跑了 
					}
				}
				else
				{
					x=nx;
					y=ny;
				}
			}
		} 
		
		printf("%d %d %c",x,y,dir_s[dir]);
		if(lost)
		{
			printf(" LOST");
		}
		printf("\n");
	}
	
	return 0;
}
