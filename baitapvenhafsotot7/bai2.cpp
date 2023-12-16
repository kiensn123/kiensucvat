#include <stdio.h>
#include <math.h>

int main(){
	int a ,b;
	scanf("%d",&a);
	scanf("%d",&b);
	int luua = a;
	int luub = b;
	int boia = a;
	int boib = b;

	while (a>0 && b>0){
		
		if (luua<luub) {
			if (luub % a ==0 and luua%a==0 ){
				printf("uocchunglonnhatla %d\n",a);
				break;
			}else {
				
				a--;
			}	
			
		}else if (luua == luub){
			
			printf("uocchunglonnhatla %d\n",luua);
			printf("boichungnhonhay %d\n",luua);
			break;
		}else {
			if (luub % b ==0 and luua%b==0 ){
				printf("uocchunglonnhatla  %d\n",b);
				break;
			}else {
				
				b--;
			}	
			
			
		}
		
		
	}
	while (true) {
		if (luua>luub){
		    
			if (boia % luua == 0 and boia%b ==0){
				
				printf("boi chung cua hai so la %d",boia);
				break;
			}else {
			   boia++;	
			}	
			
		}else if (luub!=luua){
			
		     
			if (boib % luua == 0 and boib%luub ==0){
				
				printf("boi chung cua hai so la %d",boib);
				break;
			}else {
			   boib++;	
			}
		
		
		
		}
		
		
		
		
		
	}
	
		
		
	
}
