#include<stdio.h>
int sct(int n){
	int i;
	int x0=0;
	int x1=1;
	int x2=1;
	for(i=2;i<=n;i++){	
    	x0=x1;
     	x1=x2;
	    x2=x0+x1;
	}
	return x2;
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int x2=sct(n);
	printf("\nso thu n can tim la:%d",sct(n));
}
