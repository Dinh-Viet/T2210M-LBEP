#include<stdio.h>

int main(){
	int n=0;
	for(int i=1;i<=10000;i++){
		n+=i;
		if(n>10000){
			printf("so nho nhat:%d",i);
			return 0;
		}
	}
}
