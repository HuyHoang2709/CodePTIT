#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		double a,b,c,d,e,f;
		scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
		double m,n,p;
		m = sqrt((a-c)*(a-c)+(b-d)*(b-d));
		n = sqrt((a-e)*(a-e)+(b-f)*(b-f));
		p = sqrt((c-e)*(c-e)+(d-f)*(d-f));
		double chuVi = (m + n + p) / 2;
		if(m+n <= p|| m+p <= n || n+p <= m) printf("INVALID");
		else printf("%0.2lf",sqrt(chuVi *(chuVi - m) *(chuVi - n) * (chuVi - p)));
		printf("\n");
	}
	return 0;
}
