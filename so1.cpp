#include<stdio.h>
#include<math.h>

int main(){
	float x,hh; 
	printf("nhap doanh so", x);
	scanf("%f", &x);
	if(x<=100){
		hh = x-0.05;
		printf("tong doanh so la: %.2f\n", x);
		printf("tong hoa hong la: %.2f\n", hh);
	}else{
		if(x<=300){
			hh= x*0.1;
			printf("tong doanh so la: %.2f\n", x);
		    printf("tong hoa hong la: %.2f\n", hh);
		}else{
			if(x>300);
			   hh = x*0.2;
			   printf("hoa hong la:", hh);
		}
			}
		}
    
