#include <stdio.h>
//找回文
 
int main()
{
	int n,i,j,count;
	count=0;
	
	while(scanf("%d",&n)!=EOF)
	{
		int temp_n=n;
		count=0;
		int flag=1; //判斷是否為回文 1是，0不是 
		
		if(n==0)
		{
			count==1;
		}
		else
		{
			while(temp_n>0) //計算有幾個數 
			{
				temp_n/=10;
				count++;
			}
		}
		
		if(count==1) //只有一個數也算回文 
		{
			printf("The number is a palindrome\n");
			continue;
		}
		
		j=1;
		for(i=1;i<count;i++)
		{
			j*=10;
		}
		
		temp_n=n;
		
		for(i=0;i<count/2;i++)
		{
			int left=temp_n/j;
			int right=temp_n%10;
			
			if(left!=right)
			{
				flag=0;
				break;
			}
			
			temp_n%=j;  //去掉最左邊的數字 
			temp_n/=10; //去掉最右邊的數字 
			j/=100;     //因為去掉左邊和右邊各一，所以/100 
		}
		
		if(flag==1)
		{
			printf("The number is a palindrome\n");
		}
		else
		{
			printf("The number is not a palindrome\n");
		}
		
	}
	return 0;
}

