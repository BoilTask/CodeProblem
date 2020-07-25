#include<stdio.h>
int main() {
    int i,j,x,sum;
    while(scanf("\n%d",&j),j!=0) {
        sum=0;
        for(i=0; i<j; i++) {
            scanf("%d",&x);
            sum=sum+x;
        }
        printf("%d\n",sum);
    }
    return 0;
}
