//C++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	//unordered_map不在意排序，速度比map快
	//map會排序 
	unordered_map<char,string>finger=
	{
		{'c',"0111001111"},{'d',"0111001110"},
        {'e',"0111001100"},{'f',"0111001000"},
        {'g',"0111000000"},{'a',"0110000000"},
        {'b',"0100000000"},{'C',"0010000000"},
        {'D',"1111001110"},{'E',"1111001100"},
        {'F',"1111001000"},{'G',"1111000000"},
        {'A',"1110000000"},{'B',"1100000000"}
	};
	cin>>T;
	cin.ignore();//接下來會用到getline所以要清空緩存區
	while(T--)
	{
		string song,present;
		present.assign(10,'0'); //將present字串設為"0000000000"
		int count[10]; //手指按的次數
		fill(count,count+10,0); //把 count 這個陣列裡的 10 個格子，全部歸零（塞滿 0）#飽含開始，但不包含結束
		//輸入
		getline(cin,song);
		
		//計算
		for(const auto& ch:song) //把 song 裡面的東西一個一個拿出來，直接看本尊不複製，且保證絕對不改到它
		{
			for(int i=0;i<10;i++)
			{
				count[i]+=max(0,finger[ch][i]-present[i]); //max挑出最大的數
				//finger[ch][i]-present[i]->目標 減去 現在 = 這根手指需要變動的差值 
			}
			present=finger[ch];
		} 
		for(int i=0;i<10;i++)
		{
			if(i)
			{
				cout<<" ";
			}
			cout<<count[i];
		}
		cout<<"\n";
	} 
	return 0;	
}
//C語言
#include <stdio.h>
#include <string.h>

int *is_finger(char note)
{
	//用靜態變數才不會出了函數就失效 
	static int c[10]={0,1,1,1,0,0,1,1,1,1};
    static int d[10]={0,1,1,1,0,0,1,1,1,0};
    static int e[10]={0,1,1,1,0,0,1,1,0,0};
    static int f[10]={0,1,1,1,0,0,1,0,0,0};
    static int g[10]={0,1,1,1,0,0,0,0,0,0};
    static int a[10]={0,1,1,0,0,0,0,0,0,0};
    static int b[10]={0,1,0,0,0,0,0,0,0,0};
    static int C[10]={0,0,1,0,0,0,0,0,0,0};
    static int D[10]={1,1,1,1,0,0,1,1,1,0};
    static int E[10]={1,1,1,1,0,0,1,1,0,0};
    static int F[10]={1,1,1,1,0,0,1,0,0,0};
    static int G[10]={1,1,1,1,0,0,0,0,0,0};
    static int A[10]={1,1,1,0,0,0,0,0,0,0};
    static int B[10]={1,1,0,0,0,0,0,0,0,0};
	static int Z[10]={0}; 
    
	switch(note)
	{
		case 'c':
			return c;
		case 'd':
			return d;
		case 'e':
			return e;
		case 'f':	
			return f;	
		case 'g':
			return g;
		case 'a':
			return a;
		case 'b':	
			return b;
		case 'C':
			return C;
		case 'D':
			return D;
		case 'E':
			return E;
		case 'F':
			return F;		
		case 'G':
			return G;
		case 'A':
			return A;
		case 'B':	
			return B;
		default:
            return Z; 
	}
}

int main()
{
	char ch[201];
    
    int n;
    scanf("%d",&n);
	getchar(); 
	
	while(n--)
	{
		//輸入指法(因為歌曲會有空白，所以用getchar)
		 
		char temp;
		int i=0;
		while((temp=getchar())!='\n'&&temp!=EOF)
		{
			ch[i]=temp;
			i++;
		}
		ch[i]='\0';
		
		
		//因為陣列是從0開始，所以如果從1開始的話要設[11] 
		int finger1[11]={0};
		int finger2[11]={0};
		
		for(int i=0;ch[i]!='\0';i++)
		{
			//用字符比較 
			char ch_compare = ch[i]; 
			
			//用指標接收陣列的位置 
			int *now=is_finger(ch_compare);
			
			for(int j=1;j<=10;j++)
			{
				//因為j從開始，所以要j-1 
				int in_pressed =now[j-1];
				
				if (in_pressed == 1) //按下 
				{ 
               	 	if (finger2[j] == 0) 
					{
                       finger1[j]++;    // 計數
                       finger2[j] = 1; 
               		 }
            	}
            	else //沒按 
				{
                	finger2[j] = 0; 
                }
				
			}
		
		}
		for (int j = 1; j <= 10; j++) 
		{
			if(j==10) //確保最後一個數字後面不會有空白 
			{
				printf("%d", finger1[j]);
			}
			else
			{
				printf("%d ", finger1[j]);	
			} 
            
        }
        printf("\n");
	}
	return 0;
}
