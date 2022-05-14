/* for03.c */

#include <stdio.h>

int main()
{
	int i, j;

	for (i = 0; i < 4; i++) {
		printf("外側のfor文の１, i = %d\n", i);

		for (j = 0; j < 3; j++) {
			printf("\t内側のfor文, j = %d\n", j);
		}

		printf("外側のfor文の２, i = %d\n", i);
	}

	return 0;
}