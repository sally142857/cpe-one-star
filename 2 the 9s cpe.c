#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char num[1001]={0};
	int i;
	
	
	while(scanf("%s",num))
	{
		if(num[0]=='0'&&strlen(num)==1)
		{
			break;
		}
		else
		{
			printf("%s ",num);
			
			int mul,n=0;
			if(strlen(num)==1 && num[0]=='9')
			{
				printf("is a multiple of 9 and has 9-degree 1.");
				n=1;
			}
			
			while(strlen(num)>=2)
			{
				mul=0;
				for(i=0;i<strlen(num);i++)
				{
					mul=mul+num[i]-'0';
				} 
				if(mul%9==0)
				{
					n++;
				}
				sprintf(num,"%d",mul);
			}
			if(n>1)
			{
				printf("is a multiple of 9 and has 9-degree %d.", n);
			}
			else if(n==0) 
			{
				printf("is not a multiple of 9.");
			}
			
			printf("\n");
			 
		}
		memset(num, 0, sizeof(num));
	}
	
	return 0;
}
