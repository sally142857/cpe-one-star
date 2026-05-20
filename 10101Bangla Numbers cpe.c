//C++
#include <iostream>
#include <iomanip>
using namespace std;

void Bangla(long long int n) //邏輯與C語言版本一樣
{
	while(n>0)
	{
		if(n>=10000000)
		{
			cout<<" "<<n/10000000<<" kuti";
			n%=10000000;
			continue;
		}
		if(100000<=n&&n<10000000)
		{
			cout<<" "<<n/100000<<" lakh";
			n%=100000;
			continue;
		}
		if(1000<=n&&n<100000)
		{
			cout<<" "<<n/1000<<" hajar";
			n%=1000;
			continue;
		}
		if(100<=n&&n<1000)
		{
			cout<<" "<<n/100<<" shata";
			n%=100;
			continue;
		}
		else
		{
			cout<<" "<<n;
			break;
		}
	}
}

int main()
{
	long long int n;
	int T=1;
	while(cin>>n)
	{
		cout<<setw(4)<<setfill(' ')<<T<<".";
		if(n==0)
		{
			cout<<" "<<0;
		}
		if(n>=10000000)
		{
			Bangla(n/10000000);
			cout<<" kuti";
			Bangla(n%10000000);
		}
		else
		{
			Bangla(n);
		}
		cout<<"\n";
		T++;
	}
	return 0;
}
//C語言
#include <stdio.h>

void cheak(long long n)
{
	if((n/10000000)>0)
	{
		cheak(n/10000000); //用遞迴來拆分數字   ex. n=230000000
		printf(" kuti");   //                      跑cheak(230000000) => 進if((n/10000000)>0)裡面
		n%=10000000;       //                      跑cheak(230000000/10000000) => cheak(23)
	}                      //                      發現只能進入if(n>0)中 => 跑printf印出數字 => 再回去跑cheak(23)下面程式碼印出kuti
	if((n/100000)>0)
	{
		cheak(n/100000);
		printf(" lakh");
		n%=100000;
	}
	if((n/1000)>0)
	{
		cheak(n/1000);
		printf(" hajar");
		n%=1000;
	}
	if((n/100)>0)
	{
		cheak(n/100);
		printf(" shata");
		n%=100;
	}
	if(n>0)
	{
		printf(" %lld",n); //負責印出數字(遞迴的數字都是從這邊印出來的) 
	}
}

int main()
{
	long long n;
	int i=1; //編號
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0) //測資可能是0 
		{
			printf("%4d. %lld\n",i,n);
			i++;
			continue;
		}
		printf("%4d.",i);
		cheak(n);
		printf("\n");
		i++;
	}
	return 0;
}


