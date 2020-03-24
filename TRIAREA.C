#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,s,t;
    printf("\n--------- TriangleArea ---------\n          By LimaXRomeo         \n");
    printf("Please enter the lengths of three sides.\n");
    do{
	printf("a=");
	scanf("%lg", &a);
	printf("b=");
	scanf("%lg",&b);
	printf("c=");
	scanf("%lg",&c);
	d=(a+b+c)/2.0;
	t=d*(d-a)*(d-b)*(d-c);
	s=sqrt(t);
	printf("\nS=%lg\n", s);
	printf("Press 5 to continue, or press ENTER to exit\n");
    }while(getch()=='5');
}