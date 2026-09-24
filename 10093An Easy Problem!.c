//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	while(cin>>n)
	{
		int sum=0,k=0,max=1,N;
		for(int i=0;i<n.length();i++)
		{
			if(n[i]>='0'&&n[i]<='9')
			{
				k=n[i]-'0';
			}
			else if(n[i]>='A'&&n[i]<='Z')// A~Z 換成 10~35
			{
				k=n[i]-'A'+10;
			}
			else if(n[i]>='a'&&n[i]<='z')// a~z 換成 36~61
			{
				k=n[i]-'a'+36;
			}
			sum+=k; //可能會有兩三位數的情況 ex.2A
			if(k>max)
			{
				max=k; //確保該串數字中最大的數是哪個
			}
		}
		for(N=max+1;N<=62;N++)
		{
			if(sum%(N-1)==0) //利用「所有位數的總和」當作數學捷徑，來快速檢查這個超大數字在 $N$ 進位下，到底能不能被 $N-1$ 完美整除
			{
				break;
			}
		}
		if(N<=62)
		{
			cout<<N<<endl;
		}
		else
		{
			 cout<<"such number is impossible!"<<endl;
		}
	}
	return 0;	
} 
