#include <stdio.h>
#include <stdlib.h>

int n, m;

int compare(const void *a, const void *b) 
{
    // 1. р void 夹锣 int 
    int numA = *(int *)a;
    int numB = *(int *)b;
    
    // 0. (匡皌) 狦ㄢ计Ч单钡肚 0
    if (numA == numB) return 0;

    // 2. ゑ緇计
    if ((numA % m) > (numB % m)) return 1;   // 緇计逼
    if ((numA % m) < (numB % m)) return -1;  // 緇计逼玡

    // 3. 緇计单ゑ案
    // (祘Α禲硂緇计﹚妓钡ゑ)
    
    int oddA = numA % 2;
    int oddB = numB % 2;

    // 猵 A: 案 (计璶逼玡)
    // ノ荡癸┪ぃ单0ㄓ絋玂璽计计砆ъ
    if (oddA == 0 && oddB != 0) return 1;   // A案 B -> A逼
    if (oddA != 0 && oddB == 0) return -1;  // A B案 -> A逼玡

    // 猵 B: 常琌计 (逼玡)
    if (oddA != 0 && oddB != 0) 
    {
        if (numA < numB) return 1;  // Aゑ耕 -> A逼
        else return -1;             // Aゑ耕 -> A逼玡
    }

    // 猵 C: 常琌案计 (逼玡)
    if (oddA == 0 && oddB == 0) 
    {
        if (numA > numB) return 1;  // Aゑ耕 -> A逼
        else return -1;             // Aゑ耕 -> A逼玡
    }
    
    return 0; // 玂繧ノ
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
        
        // ㊣е硉逼竟
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

//禬 
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
//		//ユ传(沮砏玥逼) 
//		for(int i=0;i<n;i++)
//		{
//			for(int j=i+1;j<n;j++)
//			{
//				if((num[i]%m)>(num[j]%m)) //ゑ耕緇计 
//				{
//					int temp=num[i];
//					num[i]=num[j];
//					num[j]=temp;
//				} 
//				else if((num[i]%m)==(num[j]%m)) //璝緇计妓 
//				{
//					if(num[i]%2==0 && num[j]%2!=0) //案计计(玡琌计碞ぃノユ传┮ぃノ糶) 
//					{
//						int temp=num[i];
//						num[i]=num[j];
//						num[j]=temp;
//					}
//					else if(num[i]%2==0 && num[j]%2==0) //常案计 
//					{
//						if(num[i]>num[j]) //玡璶ユ传(耕逼玡) 
//						{
//							int temp=num[i];
//							num[i]=num[j];
//							num[j]=temp;
//						}
//					}
//					else if(num[i]%2!=0 && num[j]%2!=0) //常计 (耕逼玡) 
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
