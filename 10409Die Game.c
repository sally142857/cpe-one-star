//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		string s;
		int top=1,bottom=6;
		int north=2,south=5;
		int west=3,east=4;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			if(s=="north")
			{
				swap(bottom,north);
				swap(north,top);
				swap(top,south);
			}
			else if(s=="south")
			{
				swap(bottom,south);
				swap(south,top);
				swap(top,north);
			}
			else if(s=="west")
			{
				swap(bottom,west);
				swap(west,top);
				swap(top,east);
			}
			else if(s=="east")
			{
				swap(bottom,east);
				swap(east,top);
				swap(top,west);
			}
		}
		cout<<top<<"\n";
	}
	return 0;	
} 
//C語言
#include<string.h>    
#include<stdio.h>

int main()
{
	int n,i;
	
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		char com[10];
		int die[6]={1,2,3,6,5,4}; //¹ïÀ³»ë­± [0]¹ï[3],[1]¹ï[4],[2]¹ï[5] 
		
		//ªì©ltop¬°1 
		while(n--)
		{
			int temp;
			scanf("%s",com);
			
			if(strcmp(com,"north")==0) //´Â¥_Â½ 
			{
				temp=die[0];
				die[0]=die[4];
				die[4]=die[3];
				die[3]=die[1];
				die[1]=temp;
			}
			else if(strcmp(com,"east")==0) //´ÂªFÂ½ 
			{
				temp=die[0];
				die[0]=die[2];
				die[2]=die[3];
				die[3]=die[5];
				die[5]=temp;
			}
			else if(strcmp(com,"south")==0) //´Â«nÂ½ 
			{
				temp=die[0];
				die[0]=die[1];
				die[1]=die[3];
				die[3]=die[4];
				die[4]=temp;
			}
			else if(strcmp(com,"west")==0) //´Â¦èÂ½ 
			{
				temp=die[0];
				die[0]=die[5];
				die[5]=die[3];
				die[3]=die[2];
				die[2]=temp;
			}
		}
		printf("%d\n",die[0]);
	}
	return 0;
} 
