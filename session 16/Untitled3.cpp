#include<stdio.h>
int main(){
	int n,x,i; 
	int arr[100];
	do{
        printf("Nhap so phan tu mang:");
        scanf("%d", &n);
    }while(n<1 || n>100);
	for(i=0;i<n;i++) {
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);	
    }
	printf("nhap so can tim x:");
	scanf("%d",&x);
	for (i=0;i<n;i++){
	   if(arr[i]==x) {
	   	printf("So can tim nam o vi tri %d trong mang", i);
	   break;
	   }
    }
    printf("So can tim khong ton tai trong mang"); 
    return 0; 
}

