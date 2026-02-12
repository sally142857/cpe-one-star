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
		}
	}
	return 0;
}
