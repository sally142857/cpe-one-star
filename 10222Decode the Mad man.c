//C++
#include <iostream>
#include <string> 
#include <cctype>
using namespace std;

int main()
{
	string s1="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"; //把鍵盤放進去 
	string s2;
	while(getline(cin,s2))
	{
		for(int i=0;i<s2.length();i++)
		{
			if(s2[i]>='A'&&s2[i]<='Z')
			{
				s2[i]=tolower(s2[i]); //變大寫(因為字母皆為小寫) 
			}
			if(s2[i]==32||s2[i]==10)
			{
				cout<<s2[i]; //如果是空白(32)或換行(10)就直接輸出 
			}
			else
			{
				cout<<s1[s1.find(s2[i])-2];
			}
		}
		cout<<"\n";
	 } 
	return 0;
}

//AI版 
//C語言
#include <string.h>
#include <ctype.h>

int main() {
   char ch;
   // 這是對應表，把鍵盤按鍵按順序排好
   char *keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
   
   while ((ch = getchar()) != EOF) {
       ch = tolower(ch); // 統一轉小寫
       
       // 找找看現在這個字在鍵盤表的哪個位置
       char *p = strchr(keyboard, ch);
       
       if (p != NULL) {
           // 如果找到了，就印出它左邊兩格的字 (p - 2)
           printf("%c", *(p - 2));
       } else {
           // 如果沒在表裡（例如空白或換行），就照原樣印
           printf("%c", ch);
       }
   }
   return 0;
}
