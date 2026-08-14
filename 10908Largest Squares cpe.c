//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int m,n,q;
		cin>>m>>n>>q;
		cout<<m<<" "<<n<<" "<<q<<"\n";
		string s[150];
		for(int i=0;i<m;i++)
		{
			cin>>s[i];
		}
		while(q--)
		{
			int r,c,num=0,width=1; //高度紀錄 
			cin>>r>>c;
			bool flag=true;
			while(flag)
			{
				num++;
				for(int i=r-num;i<=r+num&&flag==true;i++)
				{
					for(int j=c-num;j<=c+num&&flag==true;j++)
					{
						if(i<0||j<0||i>=m||j>=n)
						{
							flag=false;
						}
						else if(s[i][j]!=s[r][c])
						{
							flag=false;
						}
					}
				}
				if(flag==true)
				{
					width+=2; //左右兩邊 
				}
			}
			cout<<width<<"\n";
		} 
	}
	return 0;	
} 
//C語言
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
