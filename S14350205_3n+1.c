/*S14350205 賴聖樺*/ 
#include <stdio.h>

int main()
{
	int i,j;
	int count,temp,max;
	max=0;
	scanf("%d %d",&i,&j);
	
	if(i>j) //確保j>i 
	{
		temp=j;
		j=i;
		i=temp;
	}
	
	int n,m;
	for(n=i;n<j;n++) //將i存進n裡面，確保i的數據不會遺失
	                 //用n<j來計算[i,j]範圍內的數 
	{
		count=1; //將計數初始化
		m=n; //確保n的值不變(如果n直接帶入while會亂掉) 
		
		while(m!=1) //在m=1之前會一直跑下去，用m下去跑3n+1的運算 
		{
			if(m%2!=0) //n為奇數 
			{
				m=(3*m)+1;
				count++; //計算數量(每算一次就+1) 
			}
			else //n為偶數 
			{
				m=m/2;
				count++;//計算數量
			}
		}
		if(max<count)
		{
			max=count; //找出最大 
		}
	}
	printf("%d %d %d",i,j,max);
	return 0;	
} 
