//C++
#include <iostream>
#include <algorithm>
#include <utility>
#include <cmath>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long s,d,a,b;
		cin>>s>>d;
		a=(s+d)/2; //用一元二次方程式換算的
		b=(s-d)/2; //ex. a+b=s a-b=d 2a=s+d 2b=s-d 以此類推
		if((s+d)%2||(s-d)%2||a<0||b<0) //如過有小數點、負數，那就不可能
		{
			cout<<"impossible\n";
		}
		else
		{
			cout<<a<<" "<<b<<"\n";
		}
	}
	return 0;
}
//C語言
#include <stdio.h>

int main()
{
	int n;
	int s,d;
	scanf("%d",&n);
	
	while(n--)
	{
		scanf("%d %d",&s,&d);
		int scoreA=s;
		int scoreB=0;
		
		int cheak=1;
		while((scoreA-scoreB)!=d)
		{
			if((scoreA-scoreB)!=d)
			{
				scoreA--;
				scoreB++;
			}
			if(scoreA==0 && (scoreA-scoreB)!=d)
			{
				cheak=0;
				break;
			}
		}
		if(cheak)
		{
			printf("%d %d\n",scoreA,scoreB);
		}
		else
		{
			printf("impossible\n");
		}
	}
	return 0;
}
