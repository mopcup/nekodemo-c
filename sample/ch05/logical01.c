/* logical01.c */

#include <stdio.h>

int main()
{
	int a = 2, b = 3;

	if (a == 5 && b++)
		printf("็ๆใงใ\n");
	printf("b = %d\n", b);
	
	return 0;
}