#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int arr[a][b];
		int tongHang[a];
		int tongCot[b];
		int hang = 0, cot = 0;
		int maxHang = 0, maxCot = 0;
		
		for(int i = 0; i < a; i++) tongHang[i] = 0;
		for(int i = 0; i < b; i++) tongCot[i] = 0;
		
		for(int i = 0; i < a; i++) {
			for(int j = 0; j < b; j++) {
				scanf("%d", &arr[i][j]);
				tongHang[i] += arr[i][j];
			}
			if(maxHang < tongHang[i]) maxHang = tongHang[i];
		}
		for(int i = 0; i < a; i++) {
			if(tongHang[i] == maxHang) {
				for(int j = 0; j < b; j++) {
					arr[i][j] = -1;
				}
			}
		}
		for(int i = 0; i < b; i++) {
			for(int j = 0; j < a; j++) {
				tongCot[i] += arr[j][i];
			}
			if(maxCot < tongCot[i]) maxCot = tongCot[i];
		}
		for(int i = 0; i < b; i++) {
			if(tongCot[i] == maxCot) {
				for(int j = 0; j < a; j++) {
					arr[j][i] = -1;
				}
				break;
			}
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < a; i++) {
			int kt = 0;
			if(arr[i][0] != -1) kt = 1;
			if(kt) {
				for(int j = 0; j < b; j++) {
					if(arr[i][j] != -1) printf("%d ", arr[i][j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}
