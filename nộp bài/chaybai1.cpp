#include<stdio.h>
#include<math.h>
#include"bai1.h"
/*//bai 1
int main(){
	int a,b,c;
	printf("nhap tam giac a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(chuvitamgiac(a,b,c)){
			int x=chuvitamgiac(a,b,c);
		printf("chu vi tam giac la: %d",x);
	}
	}
*/
/*//bai 2
int main(){
	int a,b,c;
	printf("nhap tam giac a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(dientich(a,b,c)){
		int x=dientich(a,b,c);
		printf("dien tich: %d",x);
}
}
*/
/*//bai 3
int main(){
	int n;
	int str;
	int s;
	printf("nhap n:");
	scanf("%d",&n);
	if(tinhtong(n,str,s)){
	int s=tinhtong(n,str,s);
	printf ("tong cac chu so nguyen n:%d",s);
   }
}
/* //bai 4
int main(){
	int a;
	int b;
	printf("\nNhap a: ");
	scanf("%d",&a);
	printf("\nNhap b: ");
	scanf("%d",&b);
	if(UCLN(a,b)){
	int x=UCLN(a,b);
	printf ("uoc chung lon nhat la: %d",x);
	}	
}
*/
/*
int main(){
	int a;
	int b;
	int step;
	int kq;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("\nnhap b: ");
	scanf("%d",&b);
	if(BCNN(a,b,step,kq)){
		int x=BCNN(a,b,step,kq);
		printf("boi chung nho nhat la: %d",x);
	}
}
*/ 
/* //bài 6
int main(){
	int n;
	printf("nhap so: ");
	scanf("%d",&n);
	int x = sqrt(n);
	 if(x*x == n) printf("la so chinh phuong");
    else printf("khong phai la so chinh phuong");
}
*/
/* 
int main(){
	int n=0;
	int s=0;
	songuyenduongnhonhat();
	printf("so nho nhat la: %d",songuyenduongnhonhat());
}
*/

int main(){
	int n;
	int giamdan;
	printf("nhap n: ");
	scanf("%d",&n);
	KiemTra_SoGiamDan(n);
	int v = n % 10;
    if (v <= giamdan) 
	printf("la dung",KiemTra_SoGiamDan(n));
	else
	 printf("la sai",KiemTra_SoGiamDan(n));
}

