#include <stdio.h>
int main(){
	int n,min=0 ;
	printf("nhapsolan ");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		int c;
		scanf("%d",&c);
		a[i] = c;
		if (c>0){
			min = c;
		}
					
	}
	
	
	if (min == 0 ){
		printf("không co so nguyên duong");
			
	}else {
		for (int i = 0; i<n;i++ ){
		    if (a[i] < min and a[i] >0 ){
		 	   min = a[i];
			 
		    }
	    }

		
	}
	printf("so duong nho nhat trong mang la %d ",min);
			

	
}
