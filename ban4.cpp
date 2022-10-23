#include<stdio.h>

int main(){
	int n;
	int s;
	int i=0;
	printf("nhap n:\n");
	scanf("%d",&n);
	while(i<n){
		s=n%10;
		n/=10;
	}
	printf("chu so dau tien là:%d",s);
}
