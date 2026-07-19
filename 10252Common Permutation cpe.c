//C++ -1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s;
    while(getline(cin,s1),getline(cin,s2))
    {   
        if(s1==" "||s2==" ") {
            cout<<" "<<endl;
            continue;}
        for(int i=0;i<s1.length();i++)
        {
            for(int j=0;j<s2.length();j++)
            {
                if(s1[i]==s2[j]) {
                s=s+s1[i];
                s1.erase(i,1); //擦掉該字避免重複查找
                //刪除s1中下標為i的1個字符
                s2.erase(j,1); //擦掉該字避免重複查找
                //刪除s2中下標為j的1個字符
                /*原本的硬幹法
                s1[i]=-1;
                s2[j]=-2;
                */
                }
            }
        }
        sort(s.begin(),s.end());
        cout<<s<<endl;
        s1.clear(),s2.clear(),s.clear();
    }
    return 0;
}
//C++ -2
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	while(getline(cin,a),getline(cin,b))
	{
		if(a==" "||b==" ")
		{
			cout<<" "<<endl;
			continue;
		}
		int arr_a[123]={0};
		int arr_b[123]={0};
		int count[123]={0};
		
		for(int i=0;i<a.length();i++)
		{
			arr_a[a[i]]++;
		}
		for(int j=0;j<b.length();j++)
		{
			arr_b[b[j]]++;
		}
		for(int i=97;i<=122;i++)
		{
			if(arr_a[i]>0&&arr_b[i]>0)
			{
				if(arr_a[i]>arr_b[i])
				{
					count[i]=arr_b[i];
				}
				else if(arr_a[i]<arr_b[i])
				{
					count[i]=arr_a[i];
				}
				else
				{
					count[i]=arr_a[i];
				}
			}
			if(count[i]>0)
			{
				for(int j=0;j<count[i];j++)
				{
					cout<<char(i);	
				}	
			}
		} 
		cout<<"\n";
	}
	return 0;	
} 

//C語言
#include <stdio.h>

int main()
{
	char a[1001];
	char b[1001];
	
	while(gets(a) && gets(b))
	{
		int count_A[123]={0}; //紀錄a字串出現次數 
		int count_B[123]={0}; //紀錄b字串出現次數 
		int count[123]={0};   //紀錄重複的字母 
		int i,j,x;
		for(i=0;a[i]!='\0';i++)
		{
			//因為a[i]就是ascii碼，所以可以直接放入 
			count_A[a[i]]++;
		}
		
		for(i=0;b[i]!='\0';i++)
		{
			count_B[b[i]]++;
		}
		
		for(i=97;i<123;i++)
		{
			if(count_A[i]>0 && count_B[i]>0)
			{
				//可能會有一樣且重複的字母，這時要比較次數 
				if(count_A[i]>count_B[i])
				{
					for(j=0;j<count_B[i];j++)
					{
						count[i]++;
					}
				}
				else if(count_A[i]<count_B[i])
				{
					for(j=0;j<count_A[i];j++)
					{
						count[i]++;
					}
				}
				else
				{
					for(j=0;j<count_A[i];j++)
					{
						count[i]++;
					}
				}
				
			}
			if(count[i]>0) 
			{
				//有幾次一樣就輸出幾次 
				for(x=0;x<count[i];x++)
				{
					printf("%c",(char)i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
