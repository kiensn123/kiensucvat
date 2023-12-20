#include <stdio.h>

int main(){
	int n ;
	scanf("%d",&n);
	for(int i = 2 ;i <= n;i++){
		if (n % i == 0 ){
			if (i == n){
			    printf("no la so nguyen to");
			}else{
				printf("no khong phai la so nguyen to");
				break;
			}
		}
	}
}
