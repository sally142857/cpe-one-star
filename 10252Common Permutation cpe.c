#include <stdio.h>

int main()
{
	char a[1001];
	char b[1001];
	
	while(gets(a) && gets(b))
	{
		int count_A[123]={0}; //紀錄a字串出現次數 
		int count_B[123]={0}; //紀錄b字串出現次數 
		int count[123]={0};   //紀錄重複的字母 
		int i,j,x;
		for(i=0;a[i]!='\0';i++)
		{
			//因為a[i]就是ascii碼，所以可以直接放入 
			count_A[a[i]]++;
		}
		
		for(i=0;b[i]!='\0';i++)
		{
			count_B[b[i]]++;
		}
		
		for(i=97;i<123;i++)
		{
			if(count_A[i]>0 && count_B[i]>0)
			{
				//可能會有一樣且重複的字母，這時要比較次數 
				if(count_A[i]>count_B[i])
				{
					for(j=0;j<count_B[i];j++)
					{
						count[i]++;
					}
				}
				else if(count_A[i]<count_B[i])
				{
					for(j=0;j<count_A[i];j++)
					{
						count[i]++;
					}
				}
				else
				{
					for(j=0;j<count_A[i];j++)
					{
						count[i]++;
					}
				}
				
			}
			if(count[i]>0) 
			{
				//有幾次一樣就輸出幾次 
				for(x=0;x<count[i];x++)
				{
					printf("%c",(char)i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
