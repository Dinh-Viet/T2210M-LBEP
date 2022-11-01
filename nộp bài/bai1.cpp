#include<stdio.h>
#include<string.h>
//cach1
void chuyeninhoa(char s[]){
	int i;
	for(i=0;i<=strlen(s);i++){
		if(s[i]>=97 && s[i]<=122)
		s[i]-=32;	
    }
    printf("chuoisau khi chuyern thanh chu in hoa: %s",s);
}

//cách 2
int main(){
	char s[50];
	printf("Nhap chuoi bat ki:");
	scanf("%s",s);
	int i;
	for(i=0;i<=strlen(s);i++){
		if(s[i]>=97 && s[i]<=122)
		s[i]-=32;	
		}
		printf("chuoi sau khi duoc chuyen thanh chu hoa: %s",s);
	}
