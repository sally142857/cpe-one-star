//C++
#include <bits/stdc++.h>
using namespace std;

int n,m; //用全局變量表示 
bool cmp(int a,int b)
{
	if(a%m!=b%m)
	//餘數不同，餘數小的前 大的後
	{
		return a%m<b%m;
	}
	else
	{
		//餘數相同 
		if(abs(a%2))
		{
			if(abs(b%2))
			{
				return a>b; //a奇b奇，大奇數排前面 
			}
			else
			{
				return true; //a奇b偶，所以位置要互換
			}
		}
		else
		{
			if(abs(b%2))
			{
				return false; //a偶b奇數，所以位置不用換
			}
			else
			{
				return a<b; //a偶b偶，小偶數排前面
			}
		}
		//一奇一偶，奇數前 偶數後
        //兩奇數，大奇前
        //兩偶數，小偶前
	}
	return a<b;
}

int main()
{
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
		{
			cout<<0<<" "<<0<<"\n";
			break;
		}
		int arr[10005];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		} 
		sort(arr,arr+n,cmp); //對數組A的0~n-1元素進行cmp排序
		cout<<n<<" "<<m<<"\n";
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<"\n";
		}
	}
	return 0;	
} 
//C語言
#include <stdio.h>
#include <stdlib.h>

int n, m;

int compare(const void *a, const void *b) 
{
    // 1. 把 void 指標轉回 int 值
    int numA = *(int *)a;
    int numB = *(int *)b;
    
    // 0. (選配) 如果兩數完全相等，直接回傳 0
    if (numA == numB) return 0;

    // 2. 先比餘數
    if ((numA % m) > (numB % m)) return 1;   // 餘數大，排後面
    if ((numA % m) < (numB % m)) return -1;  // 餘數小，排前面

    // 3. 餘數相等，比奇偶
    // (程式跑到這，代表餘數一定一樣，可以直接比)
    
    int oddA = numA % 2;
    int oddB = numB % 2;

    // 狀況 A: 一奇一偶 (奇數要排前面)
    // 利用絕對值或不等於0來確保負數奇數也能被抓到
    if (oddA == 0 && oddB != 0) return 1;   // A偶 B奇 -> A排後面
    if (oddA != 0 && oddB == 0) return -1;  // A奇 B偶 -> A排前面

    // 狀況 B: 都是奇數 (大的排前面)
    if (oddA != 0 && oddB != 0) 
    {
        if (numA < numB) return 1;  // A比較小 -> A排後面
        else return -1;             // A比較大 -> A排前面
    }

    // 狀況 C: 都是偶數 (小的排前面)
    if (oddA == 0 && oddB == 0) 
    {
        if (numA > numB) return 1;  // A比較大 -> A排後面
        else return -1;             // A比較小 -> A排前面
    }
    
    return 0; // 保險用
}

int main()
{
    int num[10001];
    
    while(scanf("%d %d", &n, &m) != EOF && (n != 0 || m != 0))
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        
        // 呼叫快速排序的神器
        qsort(num, n, sizeof(int), compare);

        printf("%d %d\n", n, m);
        for(int i = 0; i < n; i++)
        {
            printf("%d\n", num[i]);
        }
    }
    printf("0 0\n");
    return 0;
}

//超時了 
//int main()
//{
//	int n,m;
//	
//	int num[10001];
//	
//	while((scanf("%d %d",&n,&m)!=EOF)&&(n!=0&&m!=0))
//	{
//		for(int i=0;i<n;i++)
//		{
//			scanf("%d",&num[i]);
//		}
//		
//		//交換(根據規則排序) 
//		for(int i=0;i<n;i++)
//		{
//			for(int j=i+1;j<n;j++)
//			{
//				if((num[i]%m)>(num[j]%m)) //比較餘數大小 
//				{
//					int temp=num[i];
//					num[i]=num[j];
//					num[j]=temp;
//				} 
//				else if((num[i]%m)==(num[j]%m)) //若餘數一樣 
//				{
//					if(num[i]%2==0 && num[j]%2!=0) //一偶數一奇數(前面是奇數就不用交換，所以不用寫) 
//					{
//						int temp=num[i];
//						num[i]=num[j];
//						num[j]=temp;
//					}
//					else if(num[i]%2==0 && num[j]%2==0) //都偶數 
//					{
//						if(num[i]>num[j]) //前面大於後面要交換(較小的排前面) 
//						{
//							int temp=num[i];
//							num[i]=num[j];
//							num[j]=temp;
//						}
//					}
//					else if(num[i]%2!=0 && num[j]%2!=0) //都奇數 (較大排前面) 
//					{
//						if(num[i]<num[j])
//						{
//							int temp=num[i];
//							num[i]=num[j];
//							num[j]=temp;
//						}
//					}
//				}
//			}
//		}
//		
//		printf("%d %d\n",n,m);
//		for(int i=0;i<n;i++)
//		{
//			printf("%d\n",num[i]);
//		}
//	}
//	printf("0 0\n");
//	
//	return 0;
//}
