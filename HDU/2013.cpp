#include<stdio.h>
int main() {
    int n,i;
    while(scanf("%d",&n)!=EOF) {
        for(i=1; n!=1; n--)
            i=(i+1)*2;
        printf("%d\n",i);
    }
    return 0;
}