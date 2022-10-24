#include<stdio.h>

int main(){
	int n;
	long s=0;
	int i;
	printf("Nhap n:");
	scanf("%d",&n);

		for(int i=1;i<=n;i++){
		if(n%i==0){
		    printf("\n cac uoc cua %d la: %d",n,i);
			s+=i;
       } 
    }
		printf("\ntong cac uoc la: %ld",s);
   }

