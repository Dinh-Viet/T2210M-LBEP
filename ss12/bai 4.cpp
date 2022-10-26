#include<stdio.h>
void vietdz(int n,int i){
	int s=0;
	for(i=0;i<=n;i++){
		s+=i;
}
	printf("\ntong can tim la: %d",s);
}
int main(){
	int n;
	int i;
	printf("nhap n:");
	scanf("%d",&n);
	vietdz(n,i);
	}	
