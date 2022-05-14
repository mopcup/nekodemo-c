/* strinput.c */

#include <stdio.h>

int main()
{
	char szStr[32];

	printf("文字列を入力してください---");
	scanf("%s", szStr);
	printf("あなたの入力した文字列は「%s」ですね\n", szStr);

	return 0;
}