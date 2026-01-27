#include <stdio.h>
#include <string.h>

int *is_finger(char note)
{
	//ノ繰篈跑计ぃ穦ㄧ计碞ア 
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
		//块猭(簈Ρ穦Τフ┮ノgetchar)
		 
		char temp;
		int i=0;
		while((temp=getchar())!='\n'&&temp!=EOF)
		{
			ch[i]=temp;
			i++;
		}
		ch[i]='\0';
		
		
		//皚琌眖0秨﹍┮狦眖1秨﹍杠璶砞[11] 
		int finger1[11]={0};
		int finger2[11]={0};
		
		for(int i=0;ch[i]!='\0';i++)
		{
			//ノ才ゑ耕 
			char ch_compare = ch[i]; 
			
			//ノ夹钡Μ皚竚 
			int *now=is_finger(ch_compare);
			
			for(int j=1;j<=10;j++)
			{
				//j眖秨﹍┮璶j-1 
				int in_pressed =now[j-1];
				
				if (in_pressed == 1) // 
				{ 
               	 	if (finger2[j] == 0) 
					{
                       finger1[j]++;    // 璸计
                       finger2[j] = 1; 
               		 }
            	}
            	else //⊿ 
				{
                	finger2[j] = 0; 
                }
				
			}
		
		}
		for (int j = 1; j <= 10; j++) 
		{
			if(j==10) //絋玂程计ぃ穦Τフ 
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
