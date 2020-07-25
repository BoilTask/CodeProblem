#include<stdio.h>
int main() {
    int i,j,n,k,x,sum;
    scanf("%d",&j);
    for(i=0; i<j; i++) {
        sum=0;
        scanf("%d",&n);
        for(k=0; k<n; k++) {
            scanf("%d",&x);
            sum=sum+x;
        }
        printf("%d\n",sum);
    }
    return 0;
}