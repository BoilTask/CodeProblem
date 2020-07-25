#include<stdio.h>
int pow(int a,int b,int m) {
	__int64 r=1,t=a;
	while(b) {
		if(b&1)
			r=r*t%m;
		t=t*t%m;
		b>>=1;
	}
	return (int)r;
}
int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		int M;
		scanf("%d",&M);
		int n;
		scanf("%d",&n);
		__int64 sum=0;
		while(n--) {
			int a,b;
			scanf("%d %d",&a,&b);
			sum=(sum+pow(a,b,M))%M;
		}
		printf("%lld\n",sum);
	}
	return 0;
}