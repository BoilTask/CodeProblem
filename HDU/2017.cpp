#include<stdio.h>
int main() {
    int i,j,n;
    char ch;
    scanf("%d\n",&j);
    for(i=0; i<j; i++) {
        n=0;
        while((ch=getchar())!='\n')

        {
            if(ch>='0'&&ch<='9')
                n++;

        }
        printf("%d\n",n);
    }
    return 0;
}
