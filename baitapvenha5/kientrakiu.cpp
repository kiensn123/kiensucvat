#include <stdio.h>
#include <math.h>
#include <cctype>

int main(){
	char a ;
	printf("nhap ki tu   ");
	scanf("%c",&a);
	if (isalpha(a)){
		
		if (isupper(a)){
			
			
			printf("nó là chu in hoa");
		}else{
			
			printf("nó là chu thuong");
		}
    }else if (isdigit(a)) {
    	
    	printf("no la so");
	}else {
		printf("no la ki tu dac biet");
	}
	
    
		
		
	
		
		
		

}
