//#include <stdio.h>
//#define MAX_SIZE 100000 
//有注釋版 
//int main() {
//    int x;
//    long long a[MAX_SIZE]; // 存係數，用 long long 防爆
//    
//    // 1. 外層迴圈：讀取每一題的 X
//    while (scanf("%d", &x) != EOF) 
//	{
//        
//        int n = 0; // 記錄這一題有幾個係數
//        char c;
//        // 2. 內層迴圈：處理那一長串係數
//        while (1) 
//		{
//            scanf("%lld", &a[n]);
//            n++;
//            
//            c = getchar(); 
//            // 如果讀到的是空白，就持續吃掉，直到遇到「非空白」的東西
//            while (c == ' ') 
//			{
//                c = getchar();
//            }
//
//            // 如果吃完空白發現是換行，或者檔案結束，就該停了
//            if (c == '\n' || c == EOF) 
//			{
//                break;
//            }
//
//            // 如果不是換行 (例如是下一個數字的開頭)，把它放回去給 scanf 讀
//            ungetc(c, stdin);
//        }
//    }
//        
//        // 假設輸入 1 1 1 (x^2 + x + 1)，n=3
//        // 我們要算微分後的數值
//        
//        long long result = 0;
//        // 最高次方 (degree) = n - 1
//        // 微分公式： C * x^p  ->  C * p * x^(p-1)
//        // 注意：常數項 (最後一項 a[n-1]) 微分後是 0，所以我們只跑到 n-2
//        
//        int current_power = n - 1; // 當前項的次方
//        
//        for (int i = 0; i < n - 1; i++) {
//            // 這一項微分後的係數 = 原係數 * 次方
//            long long diff_coeff = a[i] * current_power;
//            
//            // 用 Horner's Method (秦九韶) 累加
//            // 這種算法不用 pow()，精準又快
//            result = result * x + diff_coeff;
//            
//            current_power--; // 次方遞減
//        }
//        
//        // 特判：如果原本只有一個常數 (例如輸入只有 "5")
//        // 微分後應該是 0，上面的迴圈不會跑，result 預設就是 0，正確。
//        
//        printf("%lld\n", result);
//    }
//
//    return 0;
//}


#include <stdio.h>
// 1. 加大空間：題目係數可能非常多，給 100 萬比較穩
#define MAX_SIZE 1000000 

// 2. 搬到外面：大陣列一定要放全域 (Global)，不然會爆 Stack (RE)
long long a[MAX_SIZE]; 

int main() 
{
    int x;
    // long long a[MAX_SIZE]; <-- 原本在這裡，拿掉！
    
    while (scanf("%d", &x) != EOF)
    {
        
        int n = 0; 
        char c;
        int i;
        while (1) 
        {
            scanf("%lld", &a[n]);
            n++;
            
            c = getchar(); 
            while (c == ' ') 
            {
                c = getchar();
            }

            if (c == '\n' || c == EOF) 
            {
                break;
            }

            ungetc(c, stdin);
        }
        
        long long result = 0;
        int current_power = n - 1; 
        
        for (i = 0; i < n - 1; i++) 
        {
            long long diff_coeff = a[i] * current_power;
            
            result = result * x + diff_coeff;
            
            current_power--; 
        }
        
        printf("%lld\n", result);
    }

    return 0;
}

