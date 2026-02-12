#include <stdio.h>

struct date
{
	int ascii;
	int count_1;
};

int main()
{
	unsigned char str[1001]={0};
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
				// 呸胯Чタ絋
				// Ω计ユ传 (繵瞯ど经)
				// ┪琌 Ω计ASCII ユ传 (ASCII 经穦砆传玡...单单)
			
				// if (オ娩Ω计 > 娩Ω计) -> ユ传 () -> 挡狦繵瞯 (OK!)
				// if (Ω计 && オ娩ASCII < 娩ASCII) -> ユ传 () -> 挡狦ASCII  (OK!)
				if((list[j].count_1>list[j+1].count_1)
				||(list[j].count_1==list[j+1].count_1 && list[j].ascii<list[j+1].ascii))
				{
					//逼(挡篶砰俱ユ传) 
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
