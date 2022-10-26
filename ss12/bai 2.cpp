#include<stdio.h>
int sctl(int a,int b,int c){
    if((a>b) && (a>c)){
    }else{
    if((b>a) && (b>c)){
}else{
	if((c>a) && (c>b)){
}else{
	return a;
}
return b;
}
return c;
}
}
int main(){
	int a,b,c;
	printf("nhap ba so a,b,c:\n");
	scanf("%d%d%d",&a,&b,&c);
	int sct=sctl(a,b,c);
	printf(" so la lon nhat:%d\n",sctl(a,b,c));
	 }
