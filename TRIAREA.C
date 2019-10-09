#include <stdio.h>
#include <math.h>
int main()
{
    long double a,b,c,d,s,t;
    int e,i=1;
    printf("\n--------- TriangleArea ---------\n          By LimaXRomeo         \n");
    printf("Please input the lengths of three sides of your triangle.\nI'll tell you its area.\n");
    while (i==1)
    {
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
	printf("Type 0 and then ENTER to exit, or type 1 then ENTER to continue.\n");
    loop:scanf("%d",&e);
	if (e==0)
	{
	    return 0;
	}
	else if(e==1)
	{
	    printf("\nContinue.\n");
	}
	else
	{
	    printf("Invalid!\n");
	    goto loop;
	}
    }
return 0;
}