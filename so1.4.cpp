#include<stdio.h>
#include<math.h>
int main (){
	int N;
	int nghich_dao=0;
		printf(" Nhap N:");
	    scanf("%d",&N);
	while(N < 0 && printf("\n Loi: N >= 0 !"));
	while(N != 0){
		nghich_dao = nghich_dao*10 + N%10;
		N = N/10; 
	} 
	 printf("So nghich dao cua N la: %d",nghich_dao); 
}

