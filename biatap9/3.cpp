#include <stdio.h>
int main(){
	int n,so ;
	printf("nhapsolan ");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		int c;
		scanf("%d",&c);
		a[i] = c;	
	}
	printf("nhap so ");
	scanf("%d",&so);
	for (int i = 0; i<n;i++ ){
		if (a[i] / so == 1){
			  printf("co %d trong mang",so);
			  break;
		}
	}
			

	
}
