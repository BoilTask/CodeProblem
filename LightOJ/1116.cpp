#include<stdio.h>
int main() {
    int T;
    int i;
    long long W,j,k;
    scanf("%d",&T);
    for(i=1; i<=T; i++) {
        scanf("%lld",&W);
        printf("Case %d: ",i);
        if(W&1)
            printf("Impossible\n");
        else {
            for(j=2; j<=W; j+=2) {
                if(W%j==0)
                    if((W/j)&1) {
                        k=W/j;
                        printf("%lld %lld\n",k,j);
                        break;
                    }
            }
        }
    }
    return 0;
}