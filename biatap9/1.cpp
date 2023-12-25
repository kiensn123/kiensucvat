#include <stdio.h>
int main(){
	int n,tong ;
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		int c;
		scanf("%d",&c);
		a[i] = c;	
	}
	for (int i = 0; i<n;i++ ){
		if (a[i] % 2 != 0){
			
			tong = tong + a[i];
			
		}
		
		
		
	}
	
	printf("tong cac so le la %d",tong);
	
	
}
