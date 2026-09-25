//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,b1=0,b2=0;
		cin>>N;
		int x1=N,x2=N,temp;
		//N當成10進制 
		while(x1!=0)
		{
			if(x1%2==1)
			{
				b1++;
			}
			x1/=2;
		}
		//N當成16進制
		while(x2!=0)
		{
			temp=x2%10; //每一個16進位數字，剛好可以獨立拆成4個二進位 bit，所以%10讓他變成一個之後直接找就好
			while(temp!=0)
			{
				if(temp%2==1)
				{
					b2++;
				}
				temp/=2;
			}
			x2/=10;
		} 
		cout<<b1<<" "<<b2<<"\n";
	}
	return 0;	
} 
