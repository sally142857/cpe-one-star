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
		printf("%.4lf\n",(p*pow(1-p,i-1))/(1-pow(1-p,n)));
	}
	
	return 0;
}
