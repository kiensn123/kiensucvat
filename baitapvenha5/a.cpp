#include <stdio.h>
#include <math.h>

int main(){
	float a,b ;
	printf("nhapchieucao  ");
	scanf("%f",&a);
	printf("nhapcannang    ");
	scanf("%f",&b);
	float c = b / pow(a,2);
	if (c<18.5){
		printf("thg nay trong nhu nghien");
		
	}else if (c>= 18.5 && c <25){
		
		printf("thg nay nguoi binh thuong");
		
	}else {
		
		
		printf("thg nay trong nhu con heo ");
		
	}
	
	
	
	
	
	
	
}
