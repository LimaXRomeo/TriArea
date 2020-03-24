#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	double a,b,c,d,s,t;
	system("color 3F");
	do{system("cls");
		printf("--------- TriangleArea ---------\n          By LimaXRomeo         \n");
		printf("Please input the lengths of three sides of your triangle.\n I'll tell you its area.\n");
		printf("a=");
		scanf("%lg",&a);
		printf("b=");
		scanf("%lg",&b);
		printf("c=");
		scanf("%lg",&c);
		d=(a+b+c)/2.0;
		t=d*(d-a)*(d-b)*(d-c);
		s=sqrt(t);
		printf("\nS=%lg\n\n",s);
		printf("Press 5 to continue, or press ENTER to exit.\n");
	}while(getch()=='5');
}
