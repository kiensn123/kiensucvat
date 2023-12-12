#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c;
    printf("nhapphuongtrinhbac2codang : ax^2 + bx +c = 0\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if (a==0){
    	float dapan = (-c)/b;
    	printf("x bang = %f",dapan);
    	
	}else{
		float dental = b*b - 4*a*c;
		if (dental>0 ){
			float x1,x2;
			x1 = (-b+sqrt(dental))/(2*a);
			x2 = (-b-sqrt(dental))/(2*a);
			printf("phuongtrinhcohainghiemphanbiet x1 = %f , x2 = %f",x1,x2);
			
			
		}
		if (dental<0){
			printf("phuongtrinhvonghiem");
		
		}
		if (dental=0){
			float x = (-b)/2*a;
		    printf("phuongtrinhconghiemkep x = %f",x);
			
		}
		
	}





}
