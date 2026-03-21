#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,count;
	//count計算次數 
	
	while(scanf("%d %d",&a,&b)!=EOF&&(a!=0 && b!=0))
	{
		count=0; //歸零
		 
		//用平方根去計算比較快
		//ex.4開根號為2，直接省去一個一個找的時間
		//   若b=64開根號為8，最大的數的根號都只有8了，那就不會再有比它大的數了 
		for(int i=sqrt(a);i<=sqrt(b);i++)
		{
			if(i*i>=a)
			{
				//如果是完全平方數的話，加一 
				count++;
			}
		}
		printf("%d\n",count);
	}
	
	return 0;
}
