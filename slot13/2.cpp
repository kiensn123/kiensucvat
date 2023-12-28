#include<stdio.h>

int main(){
	int n,x=0,max=0,so;
	printf("nhap so n");
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++){
		scanf("%d",&a[i]);			
	}
	for (int i = 0 ;i<n-1;i++){
		for (int j=0 ; j<n-1-i ;j++ ){	
			if (a[j] > a[j+1] ){
				int dem = a[j+1];
				a[j+1] = a[j];
				a[j] = dem;			
			}
			
		}
			
	}

	int luu = a[0];
 
	for (int i = 0 ;i<n;i++){
		if (luu == a[i]){	
			x++;			
		}else  {	
			if (x > max){
				max = x;
				x = 0;
				luu=a[i];
				x++;
			}else{
				x = 0;
				luu=a[i];	
			}
		}
		
	}
	

	
	if (max <= 1){
		
		printf("khong co gia tri nao nhap lai");
		
	}else {
		x = 0;
		luu = a[0];
		for ( int i = 0 ; i<n;i++){
		    if (luu == a[i]) {
		    	x++;	
			}else{
				if (x==max){
					printf("so co gia tri lap lai nhieu lan  la %d \n",a[i-1]);
					luu=a[i];
					x = 1;
				}else{
					luu=a[i];
					x = 1;
				}
				
			}
		
		}	
		
	}
		
}
