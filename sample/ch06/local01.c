/* local01.c */

#include <stdio.h>

int function();

int i = 10;

int main()
{
	int i = 5;
	{
		int i = 3;
		printf("main関数の中のブロック内:i = %d\n", i);
	}
	printf("main関数内:i = %d\n", i);
	function();

	return 0;

}

int function()
{
	printf("function関数:i = %d\n", i);

	return 0;
}