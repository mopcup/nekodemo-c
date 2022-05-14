/* type04.c */

#include <stdio.h>

typedef struct _tagDATA {
	char name[32];
	int age;
	struct _tagDATA *nextdata;
} DATA;

int main()
{
	DATA a = {"粂井", 28, }, b = {"田中", 35, }, c = {"鈴木", 18, };
	DATA *lpdata;

	a.nextdata = &b;
	b.nextdata = &c;
	c.nextdata = NULL;

	for (lpdata = &a; lpdata; lpdata = lpdata->nextdata)
		printf("%s (%d歳)\n", lpdata->name, lpdata->age);

	return 0;
}
