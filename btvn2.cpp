#include<stdio.h>
int main(){
	int nam;
	printf("nam:");
	scanf("%d",&nam);
	
	if((nam %4==0)&&(nam %100 !=0)){
	printf("%d là nam nhuan\n",nam);
}else{
		printf("%d khong phai la nam nhuan",nam);
}

}

