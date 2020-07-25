#include<stdio.h>
int main() {
    int i,m,n,x,a,b,c;
    while(scanf("%d %d",&m,&n)!=EOF) {
        x=0;
        for(i=m; i<=n; i++) {
            a=i%10;
            b=(i%100)/10;
            c=i/100;
            if(a*a*a+b*b*b+c*c*c==i) {
                if(x==1)
                    printf(" ");
                x=1;
                printf("%d",i);

            }
        }
        if(x!=1)
            printf("no");
        printf("\n");
    }
    return 0;
}