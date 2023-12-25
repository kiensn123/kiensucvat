#include <stdio.h>
int main(){
	int n,sole ;
	printf("nhapsolan ");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		int c;
		scanf("%d",&c);
		a[i] = c;	
	}

	for (int i = 0; i<n;i++ ){
		if (a[i] % 2 != 0){
			sole = a[i];
			 
		}
	}
	printf("so le cuoi cungn trong mang la %d ",sole);
			

	
}
