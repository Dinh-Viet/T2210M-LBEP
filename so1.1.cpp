#include <stdio.h>
int main(){
	int n;
	int i=1 ; 
	int solelonnhat = 0 ;
	printf("nhap so nguyen:");
	scanf ("%d",&n);
	while (i<n){
		if(i % 2 != 0 ){
				printf("%d\n",i);
				solelonnhat=i;
		}
		i++;
	}	printf("so le lon nhat la: %d",solelonnhat);	
}

