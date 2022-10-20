 #include<stdio.h>
 #include<math.h>
int main(){
    int n;
    int i;
    int x=0;
    printf("\nNhap n = ");
    scanf("%d", &n);
   
    for(int i = 1; i <= n/2; i++)
        if(n % i == 0){
        	x+=i;
        }
        if(x==n)printf("%d la so hoan hao",n);
        if(x!=n)printf("%d khong la so hoan hao",n);
        return 0;
}
    
        
            
            
            
