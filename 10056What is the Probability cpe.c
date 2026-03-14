#include <stdio.h>
#include <math.h>

int main()
{
	int s;
	scanf("%d",&s);
	
	while(s--)
	{
		int n,i;
		double p;
		scanf("%d %lf %d",&n,&p,&i);
		//防呆(不等於0才過) 
		if(p==0)
		{
			printf("0.0000\n");
		}
		else
		{
			printf("%.4lf\n",(p*pow(1-p,i-1))/(1-pow(1-p,n))); 
			//公式說明:
			//無窮等比級數和公式 (a/(1-r))
			//成功機率：p
			//失敗機率：1-p  
			
			//分子:前 i-1 人全失敗*自己成功，等於公式中的首項 a = 第一輪贏的機率 =>p*pow(1-p,i-1)
			//分母: 等於公比 r = 一整輪大家都失敗的機率=>(1-pow(1-p,n)
		}
	}
	return 0;
}
