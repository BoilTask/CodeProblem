#include<stdio.h>
int main() {
    char a,b,c,d;
    int x,y,z,t;
    while(scanf("\n%c%c%c",&a,&b,&c)!=EOF) {
        x=a;
        y=b;
        z=c;
        if(x>y) {
            t=x;
            x=y;
            y=t;
        }
        if(y>z) {
            t=y;
            y=z;
            z=t;
        }
        if(x>y) {
            t=x;
            x=y;
            y=t;
        }
        printf("%c %c %c\n",x,y,z);
    }
    return 0;
}