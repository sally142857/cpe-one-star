//C++
#include <bits/stdc++.h>
using namespace std;
//加速器
static auto _ = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}(); 
int main()
{
	int n;
	string s;
	cin>>n;
	cin.ignore(); //忽略換行，讓getline能執行
	getline(cin,s);
	 
	while(n--)
	{
		map<string,double> tree;
		double total=0;
		//輸入
		while(getline(cin,s)&&s!="") 
		{
			tree[s]++; //樹種次數+1 
			total++;
		}
		//輸出
		for(const auto& i : tree)
		{
			cout<<i.first<<" "<<fixed<<setprecision(4)<<i.second/total*100<<"\n";
		} 
		if(n)
		{
			cout<<"\n";	 
		}
		tree.clear(); //清空
	}
	return 0;	
}
