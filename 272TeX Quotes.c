#include <stdio.h>

int main()
{
	int count;
	char s;
	
	count=0;
	
	while((s=getchar())!=EOF)
	{
		if(s=='"')
		{
			if(count%2==0)
			{
				printf("``");
			}
			else
			{
				printf("''");
			}
			count++;
		}
		else
		{
			putchar(s);
		}
		
	}

	
	return 0;
}


//
//int main() 
//{
//	char c;
//	int cnt = 0;
//	while((c = getchar()) != EOF) 
//	{
//		if(c == '"')
//		 {
//			if(cnt % 2 == 0)
//			 {
//				printf("``");
//			 } 
//			 else
//			 {
//				printf("''");
//			 }
//			 cnt++;
//		 } 
//		 else 
//		 {
//			putchar(c);
//		 }
//	}
//	return 0;
//}

