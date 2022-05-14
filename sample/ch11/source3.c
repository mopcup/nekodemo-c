/* source3.c */

#include <stdio.h>

int func2()
{
	extern int a;
	extern char *str;  /*・・・・・(1)*/

	printf("ここは、source3.cのfunc2関数です\na = %d\n", a);
	printf("%s\n", str);	 /* (1)が無いとエラーとなる */
	return 0;
}

char *str = "abc";