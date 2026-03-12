#include <stdio.h>
#include<math.h>      
#include<string.h>    
#include<stdio.h>
//自己生的智障版 
int main()
{
	char ch;
	int len,i;
	
	while((ch=getchar())!=EOF)
	{
		if(ch>=65&&ch<=90)
		{
			ch=ch+32;
		}
			switch(ch)
			{
				case '2':
					printf("`");
					break;
				case '3':
					printf("1");
					break;
				case '4':
					printf("2");
					break;
				case '5':
					printf("3");
					break;
				case '6':
					printf("4");
					break;
				case '7':
					printf("5");
					break;
				case '8':
					printf("6");
					break;
				case '9':
					printf("7");
					break;
				case '0':
					printf("8");
					break;
				case '-':
					printf("9");
					break;
				case '=':
					printf("0");
					break;
				case 'e':
					printf("q");
					break;
				case 'r':
					printf("w");
					break;
				case 't':
					printf("e");
					break;
				case 'y':
					printf("r");
					break;
				case 'u':
					printf("t");
					break;
				case 'i':
					printf("y");
					break;
				case 'o':
					printf("u");
					break;
				case 'p':
					printf("i");
					break;
				case '[':
					printf("o");
					break;
				case ']':
					printf("p");
					break;
				case '\\':
					printf("[");
					break;
				case 'd':
					printf("a");
					break;
				case 'f':
					printf("s");
					break;
				case 'g':
					printf("d");
					break;
				case 'h':
					printf("f");
					break;
				case 'j':
					printf("g");
					break;
				case 'k':
					printf("h");
					break;
				case 'l':
					printf("j");
					break;
				case ';':
					printf("k");
					break;
				case '\'':
					printf("l");
					break;
				case 'c':
					printf("z");
					break;
				case 'v':
					printf("x");
					break;
				case 'b':
					printf("c");
					break;
				case 'n':
					printf("v");
					break;
				case 'm':
					printf("b");
					break;
				case ',':
					printf("n");
					break;
				case '.':
					printf("m");
					break;
				case '/':
					printf(",");
					break;
				case ' ':	
					printf(" ");
					break;
				default:
					printf("%c",ch);
					break;
			}

	}
	
	return 0;
} 

//AI版 

//#include <string.h>
//#include <ctype.h>
//
//int main() {
//    char ch;
//    // 這是對應表，把鍵盤按鍵按順序排好
//    char *keyboard = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
//    
//    while ((ch = getchar()) != EOF) {
//        ch = tolower(ch); // 統一轉小寫
//        
//        // 找找看現在這個字在鍵盤表的哪個位置
//        char *p = strchr(keyboard, ch);
//        
//        if (p != NULL) {
//            // 如果找到了，就印出它左邊兩格的字 (p - 2)
//            printf("%c", *(p - 2));
//        } else {
//            // 如果沒在表裡（例如空白或換行），就照原樣印
//            printf("%c", ch);
//        }
//    }
//    return 0;
//}
