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
	for (int i = 0; i<n;i++ ){
		if (a[i] > 0){
			maxht++;
			if (maxht>maxdem){
				maxdem = maxht;
		
			}
		}else{
			maxht = 0;
			
		}    
	}
	if (maxdem == 1 ){
		
		printf("khoncochuoinao");
		
	}else {
		printf("dem dai nhat la %d ",maxdem);
		
	}
	
	

			

	
}
