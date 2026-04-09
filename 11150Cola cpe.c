//C++版本
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {  //使用公式解
        cout<<n*3/2<<"\n";
    }
    return 0;
}

//C語言版本
#include <stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int sum=n;
		int now;
		
		while(n>=3)
		{
			now=n/3;   //拿去換成新的 
			sum+=now;  //換來的馬上喝掉 
			n=now+n%3; //n%3=>沒用到的空瓶 
		}
		if(n==2) //如果 n 剛好等於 2，根據題目「借一還一」的規則 ，可以再喝一瓶
		         //因為借一，用3瓶再換一瓶，最後用換到的那瓶還 
		{
			sum+=1;
		}
		printf("%d\n",sum);
		
	}
	return 0;	
} 
