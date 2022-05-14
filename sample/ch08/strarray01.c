/* strarray02.c */

#include <stdio.h>

int main()
{
	char str[] = "ABC";

	printf("%s\n", str);

	str[0] = 'd';
	str[1] = 'e';
	str[2] = 'f';
	/* str[3]はもともと'\0'なので書換える必要なし */

	printf("%s\n", str);

	return 0;
}