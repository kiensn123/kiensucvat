#include <stdio.h>
#include <math.h>
#include <cctype>

int main(){
	char a ;
	printf("nhap ki tu   ");
	scanf("%c",&a);
	if (isalpha(a)){
		
		if (isupper(a)){
			
			
			printf("n� l� chu in hoa");
		}else{
			
			printf("n� l� chu thuong");
		}
    }else if (isdigit(a)) {
    	
    	printf("no la so");
	}else {
		printf("no la ki tu dac biet");
	}
	
    
		
		
	
		
		
		

}
