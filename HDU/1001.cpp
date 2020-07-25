#include<stdio.h>
int main()
{
    double n;
    while(scanf("%lf",&n)!=EOF)
        printf("%d\n\n",(int)(n*(n+1)/2));
    return 0;
}