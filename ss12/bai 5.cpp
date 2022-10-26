#include<stdio.h>
int viet(int n,int i){
	float s=0;
	for(i=1;i<=n;i++){
		s+=1.0/i;
}  
       printf("\ntong can tim la: %.2f",s);  
      return s;
}
int main(){
	int n=0;
	int i;
	printf("nhap n:");
	scanf("%d",&n);
    viet(n,i);
	}
