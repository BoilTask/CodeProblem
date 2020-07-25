#include<stdio.h>
int main() {
    int i,j,AH,AM,AS,BH,BM,BS,H,M,S;
    scanf("%d",&j);
    for(i=0; i<j; i++) {
        H=M=S=0;
        scanf("%d %d %d %d %d %d",&AH,&AM,&AS,&BH,&BM,&BS);
        S=AS+BS;
        if(S>=60) {
            S=S-60;
            M=M+1;
        }
        M=M+AM+BM;
        if(M>=60) {
            M=M-60;
            H=H+1;
        }
        H=H+AH+BH;
        printf("%d %d %d\n",H,M,S);
    }
    return 0;
}