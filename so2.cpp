#include<stdio.h>
#include<math.h>

int main(){
	float x,thue,lr;
	printf ("nhap luong nhan vien:\n", x);
	scanf("%f", &x);
	
	if(x>15){
		thue = x*30/100;
		lr = x-x*30/100;
		printf("thue thu nhap la:%f",thue);
		printf("luong rong la:%f",lr);
	}else{
		if(x>=7 && x<=15){
			thue = x*20/100;
			lr = x-x*20/100;
			printf("thue thu nhap la:%f",thue);
		    printf("luong rong la:%f",lr);
		}else{
	    		thue = x*10/100;
	    		lr = x-x*10/100;
	    		printf("thue thu nhap la:%f",thue);
		        printf("luong rong la:%f",lr);
			}
			}
	    }

