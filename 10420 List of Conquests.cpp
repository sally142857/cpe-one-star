#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	map<string,int> mp;
	
	while(n--)
	{
		cin>>s;
		
		mp[s]++;
		getline(cin,s);
	}
	
	for(auto i : mp)
	{
		cout<<i.first<<" "<<i.second<<endl;
	}
	return 0;
}
