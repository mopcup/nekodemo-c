/* string05.c */

#include <string.h>
#include <stdio.h>

int main()
{
	char str[32];
	size_t len;

	printf("文字列を入力してください--");
	scanf("%s", str);

	len = strlen(str);

	printf("%sの長さ%dです\n", str, len);

	return 0;
}