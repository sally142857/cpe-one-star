#include <stdio.h>

int binaryToDecimal(char s[])
{	
    int n = 0;
    
    for(int i=0;s[i]!='\0';i++)
    {
    	n=n*2+(s[i]-'0');
	}
    return n;
}

int GCD(int x,int y)
{
	if(x%y==0)
	{
		return y;
	}
	else
	{
		return GCD(y,x%y);
	}
}

int main()
{
	int n;
	int count=0;
	scanf("%d",&n);
	
	while(n--)
	{
		char s1[31];
		char s2[31];
		int x,y;
		
		scanf("%s",s1);
		scanf("%s",s2);
		x=binaryToDecimal(s1);
		y=binaryToDecimal(s2);
		count++;
		
		if(GCD(x,y)>1)
		{
			printf("Pair #%d: All you need is love!\n",count);
		}
		else
		{
			printf("Pair #%d: Love is not all you need!\n",count);
		}
		
	}
	return 0;
}
