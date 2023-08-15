#include <stdio.h>
#include <math.h>

int main() {
	int diemDau, diemCuoi, khoangCach, buoc, distance, buocTamThoi;
    diemDau = 45;
    diemCuoi = 40;
	// while(scanf("%d%d", &diemDau, &diemCuoi) != -1)
	{
		khoangCach = abs(diemDau - diemCuoi);
		distance = 0;
		buocTamThoi = 0;
		buoc = 0;
		while(distance < khoangCach) {
			distance = distance + (buocTamThoi+1) / 2; // Quan trong
			buocTamThoi++;
			buoc++;
		}
		if (khoangCach != 0) buoc--;
		printf("%d\n", buoc);
	}
	return 0;
}
