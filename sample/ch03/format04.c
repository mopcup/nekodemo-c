/* format04.c */

#include <stdio.h>
#include <float.h>

int main()
{
	double pai = 3.14159265358979;
	int mon = 2;
	char *str = "abc";
	float flt = 1.2f;

	printf("%5.2hf\n", flt);
	printf("%-5.2f\n", flt);
	printf("%05.2f\n", flt);
	printf("%+08.2f\n", flt);
	printf("%-08.2f\n", flt);

	printf("%d\n", mon = 3);

	printf("%e\n", pai);

	printf("%08.2f\n", pai);
	printf("%05d\n", mon);
	printf("%09s\n", str);

	printf("円周率は%fです\n", pai);
	printf("円周率は%lfです\n", pai);
	printf("もう少し詳しい値は%10.8lfです\n", pai);
	printf("もう少し詳しい値は%15.13lfです\n", pai);
	printf("もう少し詳しい値は%20.18fです\n", pai);
	printf("円周率は%010.2f\n", pai);
	printf("円周率は%-10.2f\n", pai);
	printf("円周率は%10.2f\n", pai);
	return 0;
}