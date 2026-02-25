#include <stdio.h>

int main()
{
	int t,m,d,i;
	scanf("%d",&t);
	char *day[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	//先把日期存陣列
	//用指標陣列才可以存字串
	 
	int mouthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; //2011年每個月的天數 
	int startdate=6; //1/1的日期 
	int cheakday;
	int nowday;
	
	while(t--)
	{
		scanf("%d %d",&m,&d);
		
		cheakday=0;
		for(i=1;i<m;i++) //不含當月 
		{
			cheakday+=mouthday[i]; //把所有經過的天數加起來 
		}
		cheakday+=d;  
		
		nowday=(startdate+cheakday)%7; //取餘數 
		printf("%s\n",day[nowday]); //因為1/1是星期六，所以星期六放[0]的位置 
		
	}
	return 0;
}
