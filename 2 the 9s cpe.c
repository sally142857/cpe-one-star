//C++版本
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	string n;
	while(cin>>n&&n!="0")
	{
		int sum=0;
		for(int i=0;i<n.length();i++)
		{
			sum+=(n[i]-'0');
		}
		if(sum%9==0)
		{
			int d=1;
			while(sum%9==0&&sum!=9)
			{
				int k=sum;
				sum=0;
				while(k>0)
				{
					sum+=k%10;
					k/=10;
				}
				d++;
			}
			cout<<n<<" is a multiple of 9 and has 9-degree"<<d<<endl;
		}
		else
		{
			cout<<n<<"is not a multiple of 9.\n";
		}
	}
	return 0;
}

//C語言版本
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char num[1001];
	int i;
	while(scanf("%s",num)!=EOF)
	{
		if(num[0]=='0'&&strlen(num)==1)
		{
			break;
		}
		else
		{
			printf("%s ",num);
			int sum,n=0;
			
			if(num[0]=='9'&&strlen(num)==1)
			{
				n=1;	//因為不會跑下面判斷，所以先判斷
			}	
		
			while(strlen(num)>=2)
			{
				sum=0;
				for(i=0;i<strlen(num);i++)
				{
					sum+=num[i]-'0';
				}
				if(sum%9==0)
				{
					n++;
				}
				sprintf(num,"%d",sum);
			}
			
			if(n>0)
			{
				printf("is a multiple of 9 and has 9-degree %d.",n);
			}
			else if(n==0)
			{
				printf("is not a multiple of 9.");
			}
			printf("\n");
		}
		
		memset(num,0,sizeof(num));
	}
	return 0;
} 
