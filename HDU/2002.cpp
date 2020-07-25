#include<stdio.h>
#define PI 3.1415927
int main()
{
    double V,r;
    while(scanf("%lf",&r)!=EOF)
    {
        V=(PI*r*r*r*4)/3;
        printf("%.3lf\n",V);
    }
return 0;
}