#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	printf("Nhap chuoi bat ki:");
	scanf("%s",s);
	int i;
	int kitukhac=0;
	int nguyenam=0;
	 while(s[i] != '\0') {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
            nguyenam++;
            else
            kitukhac++;
	        i++;
	    }
          printf("So ki tu nguyen am: %d\nki tu khac: %d",nguyenam,kitukhac);
}

