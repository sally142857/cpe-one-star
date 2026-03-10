#include<stdlib.h>      
#include<string.h>    
#include<stdio.h>

int main()
{
	char input[10000];
	
	int i,j,x,num,m;
	
	while(scanf("%d",&m)!=EOF)
	{
		getchar(); //吃掉scanf的換行符號
		int count[100]={0}; //用來記錄每個字母出現的次數
		int max=0;          //用來記錄最高頻率
		
		for(i=0;i<m;i++)
		{
			gets(input)!=0; //讀取一整行字串
			num=strlen(input); //字串長度 
			
			for(j=0;j<num;j++)
			{
				if(input[j]<=90 && input[j]>=65) //大寫字母 
				{
					count[input[j]]=count[input[j]]+1; //字母次數+1 
					
					if(count[input[j]]>max)
					{
						max=count[input[j]]; //更新最多數量的字母 
					}
				}
				if(input[j]<=122 && input[j]>=97) //小寫字母 
				{
					count[input[j]-32]=count[input[j]-32]+1; //-32轉成大寫比較 
					
					if(count[input[j]-32]>max)
					{
						max=count[input[j]-32];
					}
				}
				
			}
		}
		
		for(i=max;i>=1;i--)
		{
			for(x=65;x<=90;x++) //從次數最多的開始找 
			{
				if(count[x]==i) //如果次數一樣，表示是要找的那個字母 
				printf("%c %d\n",x,i);
			}
		}
	}
	
	return 0;
} 

