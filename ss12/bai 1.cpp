#include <stdio.h>
int tim_so_dao_nguoc(int n){
	int x=0;
	while(n>0){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int x=tim_so_dao_nguoc(n);
	printf("so dao nguoc: %d\n",tim_so_dao_nguoc(n));
}
