#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	system("color 3F");
	double a, b, c, d, s, t;
	int k, i = 1;
	while (i == 1)
	{
		printf("--------- TriangleArea ---------\n          By LimaXRomeo         \n");
		printf("Please input the lengths of three sides of your triangle.\n I'll tell you its area.\n");
		printf("a=");
		scanf_s("%lf", &a);
		printf("b=");
		scanf_s("%lf", &b);
		printf("c=");
		scanf_s("%lf", &c);
		d = (a + b + c) / 2.0;
		t = d * (d - a) * (d - b) * (d - c);
		s = sqrt(t);
		printf("\nS=%lf\n\n", s);
		printf("Press 0 and then ENTER to exit, or type other NUMBERS then ENTER to continue.\n");
		scanf_s("%d", &k);
		if (k == 0)
		{
			return 0;
		}
		else
		{
			system("cls");
		}
	}
}