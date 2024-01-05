#include <stdio.h>

float tbc(int a ,int b[]){
	float tong=0;
    for (int i = 0; i<a; i++) {
        tong+= b[i];
    }
    return tong/ a; 
	
	
}


int main(){
	int n ;
	printf("nhap n ");
	scanf("%d",&n);
	int an[n];
	for (int i = 0 ;i<n;i++){
		scanf("%d",&an[i]);
		
	}
	float a = tbc(n,an);
	printf("trung binh cong la %f",a);
	
	
	

}
