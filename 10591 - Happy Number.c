//C++
#include<iostream>
#include<set>
using namespace std;
int main()
{
  int T,n,cas=1;
	cin>>T;
  while(T--)
  {
	cin>>n;
	  set<int>all;
    printf("Case #%d: %d ",cas++,n);
    while(n!=1)
	{int sum=0;
      if(all.count(n))
		  break;
	 all.insert(n);
      while(n)
		  {
            sum+=(n%10)*(n%10),n/=10;
		  }
		 
      n=sum;
    }
    if(n==1)
		cout<<"is a Happy number."<<endl;
  	else 
		cout<<"is an Unhappy number."<<endl;
  }
  return 0;
}
//自己想的
#include <stdio.h>

int main()
{
	int t,i,n;
	scanf("%d",&t);
	
	for(i=1;i<=t;i++)
	{
		int flag=1;
		scanf("%d",&n);
		int copyN=n;
		int sum=0;
		int temp;
		int seen[1000]={0};
		
		while(1)
		{
			sum=0; 
			
			//判斷Happy number 
			while(copyN>0)
			{
				temp=copyN%10;
				sum+=temp*temp;
				copyN/=10;
			}
			
			//方法一(套公式) 
//			if(sum==4)
//			{
//				flag=0
//				break;
//			}
			//方法二 
			if(seen[sum]==1)
			{
				flag=0;
				break;
			}
			else if(sum==1)
			{
				break;
			}
			else
			{	
				copyN=sum;
				seen[sum]=1;
			}
		}
		
		if(flag)
		{
			printf("Case #%d: %d is a Happy number.\n",i,n);
		}
		else
		{
			printf("Case #%d: %d is an Unhappy number.\n",i,n);
		}
	}
	return 0;
}
