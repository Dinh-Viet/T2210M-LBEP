#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	scanf("%d",&a);
	scanf("%d",&b);
    scanf("%d",&c);
     
    if(a<b){
    	printf("min la %d", a);
    }else{
    	if(b<c){
    		printf("min la %d", b);
    	}else{
    		if(a<c){
    			printf("min la %d", c);
			}
		}
		}
	}
