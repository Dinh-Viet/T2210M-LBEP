#include<stdio.h>
int main(){
	int n;
	int b;
	int s=0;
	printf("nhap:",n);
	scanf("%d",&n);
	while(n>0){
		b=n%10;
		s+=b;
		n/=10;
	}
	printf("tong cac chu so la:%d",s);
}
