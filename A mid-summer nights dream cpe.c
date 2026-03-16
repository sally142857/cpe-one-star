#include <stdio.h>
#include <stdlib.h>

int arr[1000000];
// qsort 所需的比較函式，由小到大排序
int compare(const void *a, const void *b) 
{
    return (*(int*)a - *(int*)b);
}

int main()
{
	int n;
	
	while(scanf("%d",&n)!=EOF)
	{
		int m;
		int i=0;
		int x=n;
		int org_n=n;
		
		while(x--)
		{
			scanf("%d",&m);
			arr[i]=m;
			i++;
		}
		
		// 使用內建排序函式，讓陣列變成遞增序列，方便找中位數
		qsort(arr, org_n, sizeof(int), compare);

		// 情況一：資料總數為偶數
		if(org_n%2==0)
		{
			n/=2;
			// 第一個輸出：最小的中位數 (左中位數)
			int mid=arr[n - 1];

			// 第二個輸出：計算輸入資料中，有多少個數落在 [arr[n-1], arr[n]] 這個區間內
			int same=0;
			for(int j = 0; j < org_n; j++) 
			{
				// 只要數字大於等於左中位數，且小於等於右中位數，就符合條件
                if(arr[j] >= arr[n - 1] && arr[j] <= arr[n]) 
				{
                    same++;
                }
            }
			// 第三個輸出：計算有多少種整數可以當作中位數 A
            // 公式：(右中位數 - 左中位數 + 1)
			int count=arr[n] - arr[n - 1] + 1;
			
			printf("%d %d %d\n",mid,same,count);
		}
		// 情況二：資料總數為奇數
		else
		{
			n/=2;
			// 第一個輸出：唯一的中位數
			int mid=arr[n];
			// 第二個輸出：計算輸入資料中，有多少個數字等於這個中位數
			int same=0;
			for(int j=0;j<org_n;j++)
			{
				if(arr[j]==mid)
				{
					same++;	
				}	
			}	
			// 第三個輸出：在奇數情況下，能使總和最小的整數只有中位數一個
			int count=1;
			
			printf("%d %d %d\n",mid,same,count);
		}
		
	}
	return 0;
}
