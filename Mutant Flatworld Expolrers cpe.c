//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,sx,sy;
	char D[2],cmd[1000],pre[100][100]={};
	cin>>n>>m;
	while(cin>>sx>>sy>>D)
	{
		cin>>cmd;
		int d=D[0],flag=0;
		for(int i=0;cmd[i]!='\0';i++) //也可以直接寫cmdp+[i] 
		{
			if(cmd[i]=='F') //直走 
			{
				switch(d)
				{
					case 'N':
						sy++;
						break;
					case 'E':
						sx++;
						break;
					case 'W':
						sx--;
						break;
					case 'S':
						sy--;
						break;
				}
			}
			else if(cmd[i]=='R') //右轉 
			{
				switch(d)
				{
					case 'N':
						d='E';
						break;
					case 'E':
						d='S';
						break;
					case 'W':
						d='N';
						break;
					case 'S':
						d='W';
						break;
				}
			}
			else //左轉 
			{
				switch(d)
				{
					case 'N':
						d='W';
						break;
					case 'E':
						d='N';
						break;
					case 'W':
						d='S';
						break;
					case 'S':
						d='E';
						break;
				}
			}
			if(sx<0||sy<0||sx>n||sy>m)
			{
				switch(d)
				{
					case 'N':
						sy--;
						break;
					case 'E':
						sx--;
						break;
					case 'W':
						sx++;
						break;
					case 'S':
						sy++;
						break;
				}
				if(pre[sx][sy]==1)
				{
					continue;
				}
				flag=1;
				pre[sx][sy]=1;
				break;	
			}
		
		}
		if(flag==0)
		{
			cout<<sx<<" "<<sy<<" "<<char(d)<<"\n";
		}
		else
		{
			cout<<sx<<" "<<sy<<" "<<char(d)<<" LOST\n";
		}
	}
	return 0;	
} 
//C語言
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
