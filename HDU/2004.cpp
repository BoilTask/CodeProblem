#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
    if(n<=100&&n>=0)
        {
        if(n<60)
        printf("E\n");
        if(n>=60&&n<70)
        printf("D\n");
        if(n>=70&&n<80)
        printf("C\n");
        if(n>=80&&n<90)
        printf("B\n");
        if(n>=90&&n<=100)
        printf("A\n");
        }
    else
        {
        printf("Score is error!\n");
        }
    
    }
return 0;
}