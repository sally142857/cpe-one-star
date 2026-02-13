#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char n[2000];
	while(scanf("%s",n)!=EOF)
	{
		if(n[0]=='0'&&n[1]=='\0')
		{
			break;
		}
		
		int r=0;
		int l=0;
		int i;
		int len=strlen(n);
		
		for(i=0;i<len;i++)
		{
			if(i%2==0)
			{
				l+=n[i]-'0'; //°¸¼Æ 	
			}
			else
			{
				r+=n[i]-'0';   //©_¼Æ
			}	
		}
		
		if((r-l)%11==0)
		{
			printf("%s is a multiple of 11.\n",n);
		}
		else
		{
			printf("%s is not a multiple of 11.\n",n);
		}
		
	}
	return 0;
}
