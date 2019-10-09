#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d,s,t;
    int e,i=1;
    printf("--------- TriangleArea ---------\n          By LimaXRomeo         \n");
    printf("Please input the lengths of three sides of your triangle.\nI'll tell you its area.\n");
    while (i==1)
    {
	printf("a=");
	scanf("%lf", &a);
	printf("b=");
	scanf("%lf",&b);
	printf("c=");
	scanf("%lf",&c);
	d=(a+b+c)/2.0;
	t=d*(d-a)*(d-b)*(d-c);
	s=sqrt(t);
	printf("\nS=%lf\n", s);
	printf("Press 0 and then ENTER to exit, or type other NUMBERS then ENTER to continue.\n");
	scanf("%d",&e);
	if (e==0)
	{
	    return 0;
	}
	else
	{
	    printf("\nContinue.\n");
	}
    }
}