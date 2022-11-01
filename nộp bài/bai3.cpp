#include <stdio.h>
#include <string.h>

int main (){
	char a[50], b[50];
	printf ("nhap a:");
	scanf("%s",a);
	printf("nhap b:");
	scanf("%s",b);	
	int found=0;
	for (int i=0;strlen(b)>i;i++){
		if(strchr(a,b[i])){
			found =1;
		}else{
			found=0;
			break;
		}
		}	
	if(found==1){
	printf("b nam trong a");
}else{
	printf("b khong nam trong a");
}
}	

