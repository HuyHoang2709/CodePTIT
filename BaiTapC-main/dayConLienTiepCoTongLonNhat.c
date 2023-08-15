#include <stdio.h>

// Su dung thuat toan Kadane
// Cac buoc
// B1: Nhap mang
// B2: Tao 2 bien sum1 = 0 (tinh tong tam thoi) va sum2 = min(khoang gia tri cua mang) (tinh tong max)
// B3: Cong lien tiep cac phan tu cua mang vao sum1, xay ra cac TH sau:
//     + TH1: sum1 < 0 => Dat sum1 = 0
//     + TH2: sum1 > sum2 => Dat sum2 = sum1
// 	   + Th3: sum1 < sum2 => Bo qua
// B4: Cong tiep roi quay lai check B3 toi khi het day

int main() {
	int t;
    scanf("%d", &t);
    while(t--) 
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }
		long long sum1 = 0;
		long long sum2 = -1e16;
		for(int i = 0; i < n; i++) 
        {
            sum1 += (long long) a[i];
			if(sum1 > sum2) sum2 = sum1;
			if(sum1 < 0) sum1 = 0;
        }
		printf("%lld\n", sum2);
    }
	return 0;
}
