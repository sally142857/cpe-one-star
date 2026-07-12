//C++版本
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(a==0&&b==0)
		{
			break;
		}
		int carry=0;
		int count=0;
		
		while(a||b) //有一個為0就不用跑了 
		{
			if(a%10+b%10+carry>=10)
			{
				count++;
				carry=1;
			}
			else
			{
				carry=0;
			}
			a/=10;
			b/=10;
		}
		if(count==0)
		{
			cout<<"No carry operation.\n";
		}
		else if(count==1)
		{
			cout<<"1 carry operation.\n";
		}
		else
		{
			cout<<count<<" carry operations.\n";
		}
		
	} 
	return 0;	
} 
//c語言版本
#include <stdio.h>

int main()
{
	int x,y;
	
	int m,n,count,carry;
	
	while(scanf("%d %d",&x,&y)!=EOF && (x!=0 || y!=0))
	{
		count=0;
		carry=0; //十進位
		while(x>0||y>0||carry>0)
		{
			m=x%10;
			n=y%10;
			if(m+n+carry>=10) //+carry等於加之前有進位過的1
			{
				count++;
				carry=1;
			}
			else
			{
				carry=0;
			}
			x/=10;
			y/=10;
		}
		if(count>1)
		{
			printf("%d carry operations.\n",count);
		}
		else if(count==1)
		{
			printf("%d carry operation.\n",count);
		}
		else
		{
			printf("No carry operation.\n");
		}
	}
	
	return 0;
} 
