#include <stdio.h>

// 題目通常係數不會太少，設大一點比較穩
#define MAX_SIZE 1000 

int main() {
    int x;
    long long a[MAX_SIZE]; // 存係數，用 long long 防爆
    
    // 1. 外層迴圈：讀取每一題的 X
    while (scanf("%d", &x) != EOF) {
        
        int n = 0; // 記錄這一題有幾個係數
        
        // 2. 內層迴圈：處理那一長串係數
        while (1) {
            scanf("%lld", &a[n]);
            n++;
            
            char ch = getchar(); // 讀係數後面那個符號
            
            if (ch == '\n') 
			{
                // 如果直接是換行，收工
                break;
            } 
            else if (ch == ' ') 
			{
                // 如果是空白，我們要確認這是不是「最後一個空白」
                char next_ch = getchar(); // 偷看下一個
                
                if (next_ch == '\n') 
				{
                    // 抓到了！是「空白+換行」，收工
                    break;
                } else 
				{
                    // 不是換行，代表後面還有數字
                    // 把剛剛偷看的 next_ch 塞回去輸入流 (退貨)
                    // 這樣迴圈回到開頭 scanf 時才讀得到這個數字
                    ungetc(next_ch, stdin);
                }
            }
        }
        
        // 假設輸入 1 1 1 (x^2 + x + 1)，n=3
        // 我們要算微分後的數值
        
        long long result = 0;
        // 最高次方 (degree) = n - 1
        // 微分公式： C * x^p  ->  C * p * x^(p-1)
        // 注意：常數項 (最後一項 a[n-1]) 微分後是 0，所以我們只跑到 n-2
        
        int current_power = n - 1; // 當前項的次方
        
        for (int i = 0; i < n - 1; i++) {
            // 這一項微分後的係數 = 原係數 * 次方
            long long diff_coeff = a[i] * current_power;
            
            // 用 Horner's Method (秦九韶) 累加
            // 這種算法不用 pow()，精準又快
            result = result * x + diff_coeff;
            
            current_power--; // 次方遞減
        }
        
        // 特判：如果原本只有一個常數 (例如輸入只有 "5")
        // 微分後應該是 0，上面的迴圈不會跑，result 預設就是 0，正確。
        
        printf("%lld\n", result);
    }

    return 0;
}
