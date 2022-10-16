#include<stdio.h>
int main(){
	int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int c=a;
	a=b;
	b=c;
	printf("a = %d\n",a);
	printf("b = %d",b);
}

