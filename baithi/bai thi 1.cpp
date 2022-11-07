#include <stdio.h>
int main(){
	int ary[10];
	printf("Nhap chuoi so dao nguoc\n");
	int n;
	for(int i= 0; i< 10; i++){
        printf("a[%d]: ",i+1);
		scanf("%d", &ary[i]);
	}	
	printf("chuoi dao nguoc la\n");
	for(int i=10-1; i>=0; i--){
	printf("%d\n",ary[i]);
	
    }
}

