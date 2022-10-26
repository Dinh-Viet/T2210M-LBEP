#include <stdio.h>

int timdaonguoc(int n){
	int x=0;
	while(n!=0){
		int sd=n%10;
		x=x*10+ sd;
		n/=10;
	}
	return x;
}
	
void showMenu(){
	printf("1.pho ga\n");
	printf("1.pho bo\n");
	printf("1.com rang\n");
	printf("1.coca\n");
}	
bool ktsoduong(int n){
	if (n>0){
		return true;
	}
	return false;
}
bool ktsonguyento(int n){
	int c=0;
	printf("nhap so n:");
	scanf("%d",n);
	for(int i=1;i<=n;i++){
	if(n%i==10){
		c++;
	}
}	
		if(c==2){
			return true;
		}
		return false;
	}

bool ktsonguyen(int n){
	if(n<2){
		return false;
	}
	if(n<4){
		return true;
	}
	int i=2;
	while(i<n-1){
		if(n%10==0){
			return false;
		}
		i++;
	}
	return true;
}

int main(){
	showMenu();
	int x;
	scanf ("%d",&x);
	if(ktsoduong(x)){
		printf("%d la so duong\n",x);
	}else{
		printf("%d khong phai la so duong");
	}
}


