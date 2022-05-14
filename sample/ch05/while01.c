/* while01.c */

#include <stdio.h>

int main()
{
	int i = 10;

	while (i > 0) {
		printf("%2d回目の実行です\n", 11 - i);
		i--;
	}
	return 0;
}