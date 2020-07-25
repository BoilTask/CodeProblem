#include<stdio.h>
int main() {
    int i,j,a,b;
    scanf("%d",&j);
    for(i=0; i<j; i++) {
        scanf("%d %d",&a,&b);
        a=a%100;
        b=b%100;
        printf("%d\n",(a+b)%100);
    }
    return 0;
}