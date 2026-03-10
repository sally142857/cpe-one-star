#include<stdlib.h>      
#include<string.h>    
#include<stdio.h>

int main()
{
	char input[10000];
	
	int i,j,x,num,m;
	
	while(scanf("%d",&m)!=EOF)
	{
		getchar();
		int count[100]={0},max=0;
		
		for(i=0;i<m;i++)
		{
			gets(input)!=0;
			num=strlen(input);
			
			for(j=0;j<num;j++)
			{
				if(input[j]<=90 && input[j]>=65)
				{
					count[input[j]]=count[input[j]]+1;
					if(count[input[j]]>max)
					{
						max=count[input[j]];
					}
				}
				if(input[j]<=122 && input[j]>=97)
				{
					count[input[j]-32]=count[input[j]-32]+1;
					if(count[input[j]-32]>max)
					{
						max=count[input[j]-32];
					}
				}
				
			}
		}
		
		for(i=max;i>=1;i--)
		{
			for(x=65;x<=90;x++)
			{
				if(count[x]==i)
				printf("%c %d\n",x,i);
			}
		}
	}
	
	return 0;
}  

