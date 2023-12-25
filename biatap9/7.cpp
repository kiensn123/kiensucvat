#include <stdio.h>
int main(){
	int n , cc = 0 ;
	printf("nhapsolan ");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		int c;
		scanf("%d",&c);
		a[i] = c;		
	}
	int maxdem = 0;
	int maxht = 0;
	int tinhtong = 0;
	int tonglonnhat = 0;
	for (int i = 0; i<n;i++ ){
		if (a[i] > 0){
			maxht++;
			tinhtong += a[i];
			if (maxht>maxdem){
				
				maxdem = maxht;
				
		
			}
		}else{
			
			if (tinhtong > tonglonnhat){
				
				tonglonnhat = tinhtong;
				
				
			}
			maxht = 0;
			tinhtong = 0;
		}    
	}
	
	
	if (maxdem == 1 ){
		
		printf("khoncochuoinao");
		
	}else {
		printf("tong lon nhat la %d\n ",tonglonnhat);
		
	}
	
	

			

	
}
