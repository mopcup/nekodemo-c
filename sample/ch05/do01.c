/* do01.c */

#include <stdio.h>

int main()
{
	int n;

	do {
		printf("整数を入力してください(0で終了)---");
		scanf("%d", &n);
		printf("あなたの入力した数字は%dですね\n", n);
	} while (n);

	return 0;
}