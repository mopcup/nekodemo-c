/* strinput04.c */

#include <stdio.h>

int main()
{
	char str[64], *s ="文字列を入力してください---";

	printf(s);
	while (strcmp(gets(str), "")) {
		printf("入力した文字列は%sですね\n", str);
		printf(s);
	}

	return 0;
}