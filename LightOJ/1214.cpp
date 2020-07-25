#include<stdio.h>
#include<string.h>
int main() {
    int T,b,l;
    char s[220];
    int i,j;
    long long sum;
    scanf("%d",&T);
    for(i=1; i<=T; i++) {
        scanf("%s %d",s,&b);
        l=strlen(s);
        for(j=sum=0; j<l; j++) {
            if(s[j]!='-') {
                sum=(sum*10+s[j]-'0')%b;
            }
        }
        if(!sum)
            printf("Case %d: divisible\n",i);
        else
            printf("Case %d: not divisible\n",i);
    }
    return 0;
}