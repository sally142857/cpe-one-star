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
