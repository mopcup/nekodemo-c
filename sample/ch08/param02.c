/* param02.c */

#include <stdio.h>

int showname(char **);

int main()
{
	char *name[] = {
		"粂井康孝",
		"田中良一",
		"Thomas",
		"エジソン"
	};

	showname(name);

	return 0;
}

int showname(char **p)
{
	int i;

	for (i = 0; i < 4; i++)
		printf("%s\n", p[i]);

	return 0;
}