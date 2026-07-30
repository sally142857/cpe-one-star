//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,T=1;
	cin>>n;
	while(n--)
	{
		char n1,n2;//把 N =這兩個字符吃掉
		int size;
		cin>>n1>>n2>>size;
		long long table[size*size];
		int i; //最後會用來確認，所以額外設定 
		
		for(i=0;i<size*size;i++)
		{
			cin>>table[i];
		} 
		//cheak
		for(i=0;i<size*size;i++)//因為會以中間為對稱點，所以從最外圍兩個數字開始往中間去比對 
		{
			if(table[i]!=table[(size*size-1)-i]||table[i]<0)
			{
				break;//若數字不一樣或是數字小於0就中斷
			}
		}
		//輸出
		if(i==size*size)
		{
			cout<<"Test #"<<T<<": Symmetric.\n";	
		} 
		else
		{
			cout<<"Test #"<<T<<": Non-symmetric.\n";
		}
		T++;
	}
	return 0;	
} 
//C語言
#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	int a=0;
	int i,j; //放外面online judge才會過 
	
	while(t--)
	{
		int check=1;
		int n;
		scanf(" N = %d",&n); //讀取 
		
		long long mat[105][105];
		
		//輸入陣列 
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lld",&mat[i][j]);
				if(mat[i][j]<0)
				{
					check=0;
				}
			}
		}
		 //判斷是否對稱 
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(mat[i][j] != mat[n-1-i][n-1-j])
				{
					check=0;
					break;
				}
			} 
			//check=0就退出 
			if(check==0)
			{
				break;
			}
		}
		
		//輸出 
		a++;
		if(check)
		{
			printf("Test #%d: Symmetric.\n",a);	
		}
		else
		{
			printf("Test #%d: Non-symmetric.\n",a);
		}
	}
	return 0;	
} 
