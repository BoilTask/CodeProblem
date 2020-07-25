#include<stdio.h>
double a[10200];
int n,k;
bool judge(double m) {
	int cnt=0;
	for(int i=0; i<n; i++)
		cnt+=a[i]/m;
	if(cnt>=k)
		return true;
	else
		return false;
}
int main() {
	while(scanf("%d %d",&n,&k)!=EOF) {
		for(int i=0; i<n; i++)
			scanf("%lf",&a[i]);
		double l=0.0,r=10000000.0,res;
		while(r-l>1e-6) {
			double mid=(l+r)/2;
			if(judge(mid)) {
				l=mid;
				res=mid;
			} else
				r=mid;
		}
		__int64 t=res*100.0+0.0001;
		printf("%I64d.%02I64d\n",t/100,t%100);
	}
	return 0;
}