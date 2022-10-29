#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		printf("arr[%d] = ", i);
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--){
		if( arr[i]%2!=0){
		printf ("so le cuoi cung :%d\n");
	}
}
return 0;
}
