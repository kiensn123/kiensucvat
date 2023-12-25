#include <stdio.h>
int main(){
	int n,tong=0,lancong = 0 ;
	
	printf("nhapsolan ");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		int c;
		scanf("%d",&c);
		a[i] = c;	
	}
	for (int i = 0; i<n;i++ ){
		if (i%2 == 0 ){
			if (a[i] % 2 != 0){
			  lancong++;
			  tong = tong + a[i];
			
		    }
			
		}
	
		

	}
			
	printf("lancoong %d\n",lancong);	
	printf("tong %d\n",tong);	
	
	float chim = tong/lancong;
	printf("trung binh cong so le o vi tri chan la la %f",chim);
	
	
}
