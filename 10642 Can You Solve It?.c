#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,T=1;
	cin>>n;
	while(n--)
	{
		long long x,y,a,b,count=0;
		cin>>y>>x>>b>>a;
		long long L1,L2;
		//公式 
		L1=((x+y)*(x+y+1)/2)+y;
		L2=((a+b)*(a+b+1)/2)+b;
		count=L2-L1;
		cout<<"Case "<<T<<": "<<count<<"\n";
		T++;
	}
	return 0;	
} 
