#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	map<string,int> mp; //用map紀錄名字出現次數，<名字,出現次數>這樣
	
	while(n--)
	{
		cin>>s;
		
		mp[s]++; //該名字下的次數增加 ex.[spain]++ -> <spain,1>這樣 (map[key]=value)
		getline(cin,s); //吃掉之後出現的不重要訊息
	}
	//map 容器的迴圈遍歷
	for(auto i : mp) //讓編譯器自己判斷mp的類型
	{
		cout<<i.first<<" "<<i.second<<endl; //i.first=國家名 i.second=出現次數
	}
	return 0;
}
