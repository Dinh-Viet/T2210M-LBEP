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
int timsoluong(int a,int b,int c
){
	if(a>b&&a>c){
		return a;
	}else if(b>c&&b>a){
		return b;
	}else{
		return c;
	}
	}

int timsoFibonasi(int n){
	if(n<=0){
		return 0;
	}
	if(n<3){
		return 1;
	}
	int x0=0,x1=1,x2=1;
	for(int i=3;i<=n;i++){
		x0=0;
		x1=1;
		x2=1;
	}
}


