#include<stdio.h>
void nhap(int *arr, int *n) {
	*n = 0;
	while(*n <= 0) {
		printf("Nhap n > 0: ");
		scanf("%d", n);
	}
	int i;
	for(i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

void tinhToan(int *arr, int n, float *tbl) {
	int i;
	int d = 0;
	int s = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			s += arr[i];
			d++;
		}
	}
	*tbl = (d == 0) ? 0 : 1.0f * s / d;
}

void hienThi(float tbl) {
	printf("TBC so le = %f", tbl);
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	
	float tbl;
	tinhToan(arr, n,&tbl);
	hienThi( tbl);
	
	return 0;
}

