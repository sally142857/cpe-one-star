//C++
#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int n;
	while(cin>>n&&n!=0)
	{
		bitset<32> bits(n); //長度32，把十進制n轉為二進制，前面用0補充
		int msbit=31; //最高有效位元 0~31 (共32位，最左邊為31) 
		while(bits[msbit]!=1) //從最左邊31位元檢查 
		{
			msbit--;	//去除無效位元 ex.000101 => 101 
		}
		
		cout<<"The parity of ";
		for(int i=msbit;i>=0;i--)
		{
			cout<<bits[i];
		} 
		cout<<" is "<<bits.count()<<" (mod 2).\n"; //.count() 計算 bitset 裡面總共有幾個 1 
	} 
	return 0;
}

//C語言
#include <stdio.h>

int main()
{
	int l;
	
	while(scanf("%d",&l)!=EOF)
	{
		if(l==0)
		{
			break;
		}
		
		char fro[32]={0}; //要輸出的二進制 
		char obv[32]={0}; //最初得到的(不能用，因為是反的) 
		int count=0,all=0; //count計算1出現的次數，all紀錄全部數字的數量 
		int temp=l;
		int i,x;
		for(i=0;temp>0;i++) //變成二進制 
		{
			if(temp%2==1)
			{
				count++;
			}
			obv[i]=temp%2+'0';
			temp/=2;
			all++;
		}
		
		int y=all-1;
		for(x=0;x<all;x++)
		{
			fro[x]=obv[y];
			y--;
		}

		printf("The parity of %s is %d (mod 2).\n",fro,count);
	}
	return 0;
}
