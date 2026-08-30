//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T=1,n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
		{
			return 0;
		}
		char table[150][150]={0};
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>table[i][j];
			}
		}
		if(T>=2)
		{
			cout<<"\n";
		}
		cout<<"Field #"<<T<<":\n";
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(table[i][j]=='*')
				{
					cout<<table[i][j];
				}
				else
				{
					int sum=0;
					for(int y=i-1;y<=i+1;y++)
					{
						for(int x=j-1;x<=j+1;x++)
						{
							if(table[y][x]=='*')
							{
								sum++;
							}
						}
					}
					cout<<sum;
				}
			}
			cout<<"\n";
		}
		T++;
	}
	return 0;	
}
//C語言
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
