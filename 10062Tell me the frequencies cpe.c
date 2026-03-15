#include <stdio.h>

struct date
{
	int ascii;
	int count_1;
};

int main()
{
	char str[1001]={0};
	int flag=0;
	int i,j;
	
	while(gets((char*)str))
	{
		
		if(flag)
		{
			printf("\n");
		}
	
		flag=1;
		
		int count[256]={0};
		for(i=0;str[i]!=0 && i<1000;i++)
		{
			int m=str[i];
			count[m]++;
		}
		
		struct date list[256];
		int k=0;
		for(i=0;i<256;i++)
		{
			if(count[i]>0)
			{
				list[k].ascii=i;
				list[k].count_1=count[i];
				k++;
			}
		}
		
		for(i=0;i<k;i++)
		{
			for(j=0;j<k-1;j++)
			{
				// 邏輯完全正確：
				// 次數大到小交換 (頻率升冪)
				// 或是 次數相同時，ASCII 小到大交換 (ASCII 降冪，因為大的會被換到前面去...等等)
			
				// if (左邊次數 > 右邊次數) -> 交換 (大的去後面) -> 結果：頻率小到大 (OK!)
				// if (次數相同 && 左邊ASCII < 右邊ASCII) -> 交換 (小的去後面) -> 結果：ASCII 大到小 (OK!)
				if((list[j].count_1>list[j+1].count_1)
				||(list[j].count_1==list[j+1].count_1 && list[j].ascii<list[j+1].ascii))
				{
					//排序(結構體可以整個交換) 
					struct date temp = list[j];
            		list[j] = list[j+1];
            		list[j+1] = temp;
				}
			}
		}
		
		for(i=0;i<k;i++)
		{
			printf("%d %d\n",list[i].ascii,list[i].count_1);	
		} 
	
	}
	
	return 0;
}
