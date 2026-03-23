#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[101][101]={0};
	int i=0;
	int j=0;
	
	int count=0;
	int max_len=0;
	
	while(gets(str[i])!=NULL)
	{
		int now_len = strlen(str[i]); //量一行有多長
		
		if(now_len > max_len) 
		{
        	max_len = now_len; //更新最長紀錄
    	}
		i++;     //把下一行存進陣列的下一列
		count++; //紀錄有幾行字
	}	

	// 外層迴圈 i 控制的是「直行」：從第 0 個字元開始，最多印到最大長度 (max_len) 
	for(i=0;i<max_len;i++)
	{
		//內層迴圈 j 控制的是「橫列」：
		// 題目要求最後一列輸入要印在最左邊，所以要從最後輸入的那一行 (count-1) 開始，往回跑到第 0 行
		for(j=count-1;j>=0;j--)
		{
			// 如果遇到 '\0'，代表原本的那一行比較短，這個位置沒有字元
			// 為了讓字對齊，遇到空洞必須補上空白
			// 因為題目要求90度反轉，所以要用str[j][i]來輸出
			if(str[j][i]=='\0')
			{
				printf(" ");
			}
			else
			{
				printf("%c",str[j][i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}

