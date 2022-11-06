#include<stdio.h>
int main(){
	int arr[50];
	int n;
	int d,c=0;
	int i;
	printf("Nhap mang so nguyen n:");
	scanf("%d",&n);
		for(i=0;i<n;i++){
			printf("arr[%d]=", i);
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++){
			if(arr[i]>0){
				d++;
				if(c<d){
					c=d;
				}
			}else{
				d=0;
			}
		}
		printf ("Mang so nguyen duong li?n tiep la:%d",c);
}
