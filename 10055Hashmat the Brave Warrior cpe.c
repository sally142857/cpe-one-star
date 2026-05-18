//C++
#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

int main()
{
	long long int a,b;
	while(cin>>a>>b)
	{
		cout<<abs(b-a)<<endl;
	}
	return 0;
}

//C語言
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	long long n,m;
	
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		if(n>m)
		{
			printf("%lld\n",n-m);
		} 
		else
		{
			printf("%lld\n",m-n);
		}
	}
	
	return 0;
}
