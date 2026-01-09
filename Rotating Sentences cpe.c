#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[101][101]={0};
	int i=0;
	int j=0;
	
	int count=0;
	int max_len=0;
	
	while(gets(str[i])!=NULL)
	{
		int now_len = strlen(str[i]);
		
		if(now_len > max_len) 
		{
        	max_len = now_len; 
    	}
		i++;
		count++;
	}	
	
	for(i=0;i<max_len;i++)
	{
		for(j=count-1;j>=0;j--)
		{
			if(str[j][i]=='\0')
			{
				printf(" ");
			}
			else
			{
				printf("%c",str[j][i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
