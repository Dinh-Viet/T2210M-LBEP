#include<stdio.h>
//bài 5
int main(){
	int n;
	int i;
	int max=0;
	printf("nhap n:\n");
	scanf("%d",&n);
	while(n>0){
		i=n%10;
		if(i>max){
			max=i;
			}
		n/=10;
	}
	printf("chu so lon nhat la: %d",max);
}
