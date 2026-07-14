//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		if(s[0]=='0'&&s[1]=='\0')
		{
			break;
		}
		int odd=0,even=0;
		
		for(int i=0;s[i]!='\0';i++)
		{
			if(i%2!=0)
			{
				odd+=s[i]-'0';
			}
			else
			{
				even+=s[i]-'0';
			}
		}
		if((odd-even)%11==0)
		{
			cout<<s<<" is a multiple of 11.\n";	
		} 
		else
		{
			cout<<s<<" is not a multiple of 11.\n";	
		}
	}
	return 0;	
} 
//C語言
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
