#include<stdio.h>
int main() {
    int i,x,y,m,n;
    while(scanf("%d %d",&m,&n)!=EOF) {
        if(m>n) {
            i=m;
            m=n;
            n=i;
        }
        x=y=0;
        for(i=m; i<=n; i++) {
            if(i%2==0) {
                x=x+i*i;
            } else {
                y=y+i*i*i;
            }

        }
        printf("%d %d\n",x,y);
    }
    return 0;
}