/* for04.c */

#include <stdio.h>

int main()
{
	int i = 1;

	for (;;) {	 /*全部省略して無限ループ*/
		
		printf("%2d回目\n", i);
		
		if (i >= 10)
			break;
		i++;
		
	}

	return 0;
}