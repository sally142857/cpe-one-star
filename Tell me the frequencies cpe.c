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
	
	while(scanf("%[^\n]",str)!=EOF)
	{
		//吃空格 
		getchar();
		
		int count[256]={0};
		for(int i=0;str[i]!=0 && i<1000;i++)
		{
			int m=str[i];
			count[m]++;
		}
		
		struct date list[256];
		int k=0;
		for(int i=0;i<256;i++)
		{
			if(count[i]>0)
			{
				list[k].ascii=i;
				list[k].count_1=count[i];
				k++;
			}
		}
		
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<k-1;j++)
			{
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
		
		for(int i=0;i<k;i++)
		{
			printf("%d %d\n",list[i].ascii,list[i].count_1);	
		} 
		flag=1;
		
		if(flag)
		{
			printf("\n");
		}
	}
	
	
	return 0;
}
