//C++
#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

int main()
{
	string s;
	int count=0;
	
	while(getline(cin,s))
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='"'&&count==0)
			{
				cout<<"``";
				count=1;
			}
			else if(s[i]=='"'&&count==1)
			{
				cout<<"''";
				count=0;
			}
			else
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
	return 0;
}
//C語言
#include <stdio.h>

int main()
{
	int count;
	char s;
	
	count=0;
	
	while((s=getchar())!=EOF)
	{
		if(s=='"')
		{
			if(count%2==0)
			{
				printf("``");
			}
			else
			{
				printf("''");
			}
			count++;
		}
		else
		{
			putchar(s);
		}
		
	}

	
	return 0;
}


