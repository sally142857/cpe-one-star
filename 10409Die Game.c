#include<string.h>    
#include<stdio.h>

int main()
{
	int n,i;
	
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		char com[10];
		int die[6]={1,2,3,6,5,4}; //對應骰面 [0]對[3],[1]對[4],[2]對[5] 
		
		//初始top為1 
		while(n--)
		{
			int temp;
			scanf("%s",com);
			
			if(strcmp(com,"north")==0) //朝北翻 
			{
				temp=die[0];
				die[0]=die[4];
				die[4]=die[3];
				die[3]=die[1];
				die[1]=temp;
			}
			else if(strcmp(com,"east")==0) //朝東翻 
			{
				temp=die[0];
				die[0]=die[2];
				die[2]=die[3];
				die[3]=die[5];
				die[5]=temp;
			}
			else if(strcmp(com,"south")==0) //朝南翻 
			{
				temp=die[0];
				die[0]=die[1];
				die[1]=die[3];
				die[3]=die[4];
				die[4]=temp;
			}
			else if(strcmp(com,"west")==0) //朝西翻 
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
