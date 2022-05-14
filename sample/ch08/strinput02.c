/* strinput02.c */

#include <stdio.h>

int main()
{
	char str[64];

	printf("文字列を入力してください--");
	gets(str);
	printf("入力した文字列は「%s」ですね\n", str);
	return 0;
}