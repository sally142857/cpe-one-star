//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T1,T2,X=1;
	cin>>T1;
	while(X<=T1) //避免PE 
	{
		cout<<"Case "<<X<<":\n";
		//計算油墨成本
		int cost[36];
		for(int i=0;i<36;i++)
		{
			cin>>cost[i];
		} 
		//輸入測試數量
		cin>>T2;
		while(T2--)
		{
			int Y;
			cin>>Y; //輸入要測試的數字
			
			//逐一計算每個base的打印成本 
			int r,min=0;
			int table[40]={0};
			for(int i=2;i<=36;i++) //利用短除法做十進制轉任一進制
			{
				int a=Y,sum=0;
				while(a!=0)//利用短除法做十進制轉任意進制
				{
					r=a%i;//得到的餘數就是要轉的結果
					/*(完整結果是最後要做整個數列的倒轉，
                    但在此只需要得到該進制的所有數字即可，所以不用倒轉)*/
                    sum+=cost[r];
                    a/=i;
				}
				if(min==0||sum<=min) //紀錄最小花費 
				{
					table[i]=sum;
					min=sum;
				}
			} 
			cout<<"Cheapest base(s) for number "<<Y<<":";
			for(int i=2;i<=36;i++)
			{
				if(table[i]==min) //輸出花費最少的進位制 
				{
					cout<<" "<<i;
				}
			}
			cout<<"\n";
		} 
		if(X<T1)
		{
			cout<<"\n";
		}
		X++;
	}
	return 0;	
} 
