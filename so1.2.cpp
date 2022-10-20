#include<stdio.h>
int main(){
	int a;
	int i=0;  
	printf ("nhap so nguyen:");
	scanf ("%d",&a);
	while(i<a && i%2==0 && i%3==0){
		i+=6;
		}printf("so do la: %d",i-6);
}
