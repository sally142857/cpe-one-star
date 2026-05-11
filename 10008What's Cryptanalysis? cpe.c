//C++
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n,max=0;
	cin>>n;
	getchar(); //過濾換行
	
	int table[26]={0}; //計字母出現次數 
	 
	while(n--)
	{
		string s;
		getline(cin,s);
		
		for(int i=0;i<=s.length();i++)
		{
			if('A'<=s[i]&&s[i]<='Z')
			{
				table[s[i]-'A']++;
				if(table[s[i]-'A']>max)
				{
					max=table[s[i]-'A'];
				}
			}
			if('a'<=s[i]&&s[i]<='z')
			{
				table[s[i]-'a']++;
				if(table[s[i]-'a']>max)
				{
					max=table[s[i]-'a'];
				}
			}
		}
	}
	
	for(int i=max;i>0;i--)
	{
		for(int j=0;j<26;j++)
		{
			if(table[j]==i)
			{
				cout<<char(j+'A')<<" "<<i<<endl; 
			}
		}
	}
	return 0;
}
//C語言
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
		int count[100]={0}; //用來記錄每個字母出現的次數(因為不會超過90{大寫Z}，所以設100範圍就好)
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


