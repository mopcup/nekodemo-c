/* funcptr04.c */

#define PAI 3.141592653589793

#include <stdio.h>
#include <stdlib.h>

double sankaku();
double daikei();
double en();

int main()
{
	double (*fn[3])() = {sankaku, daikei, en};
	char ret[8];
	int fnno;

	while (1) {
		printf("どの面積を求めますか\n(1:三角形 2:台形 3:円 0:終了)--");
		gets(ret);
		if (ret[0] < '0' || ret[0] > '3') {
			printf("番号が不正です\n");
			continue;
		}
		ret[1] = '\0';
		fnno = atoi(ret);
		if (fnno == 0)
			break;
		printf("面積は%fです\n", (*fn[fnno - 1])());
	}
	return 0;
}

double sankaku()
{
	char str[32];
	double teihen, takasa;

	printf("三角形の面積を求めます\n");
	printf("底辺 = ");
	gets(str);
	teihen = atof(str);
	printf("高さ = ");
	gets(str);
	takasa = atof(str);

	return teihen * takasa / 2.0;
}

double daikei()
{
	char str[32];
	double jotei, katei, takasa;

	printf("台形の面積を求めます\n");
	printf("上底 = ");
	gets(str);
	jotei = atof(str);
	printf("下底 = ");
	gets(str);
	katei = atof(str);
	printf("高さ = ");
	gets(str);
	takasa = atof(str);

	return (jotei + katei) * takasa / 2.0;
}

double en()
{
	char str[32];
	double hankei;

	printf("円の面積を求めます\n");
	printf("半径 = ");
	gets(str);
	hankei = atof(str);

	return (hankei * hankei) * PAI;
}


