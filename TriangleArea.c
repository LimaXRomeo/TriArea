#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	system("color 3F");
	long double a, b, c, d, s, t;
	int k, i = 1;
	while (i == 1)
	{
		printf("--------- TriangleArea ---------\n          By LimaXRomeo         \n");
		printf("Please input the lengths of three sides of your triangle.\n I'll tell you its area.\n");
		printf("a=");
		scanf_s("%lg", &a);
		printf("b=");
		scanf_s("%lg", &b);
		printf("c=");
		scanf_s("%lg", &c);
		d = (a + b + c) / 2.0;
		t = d * (d - a) * (d - b) * (d - c);
		s = sqrt(t);
		printf("\nS=%lg\n\n", s);
		printf("Type 0 and then ENTER to exit, or type 1 then ENTER to continue.\n");
	loop:scanf_s("%d", &k);
		if (k == 0)
		{
			return 0;
		}
		else if (k == 1)
		{
			system("cls");
		}
		else
		{
			printf("Invalid!\n");
			goto loop;
		}
	}
}