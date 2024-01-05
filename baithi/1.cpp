#include <stdio.h>

int main(){
	int n ;
	printf("nhap n ");
	scanf("%d",&n);
	int an[n];
	for (int i = 0 ;i<n;i++){
		scanf("%d",&an[i]);
		
	}
	
	
	for (int i = n-1 ;i>-1;i--){
		if (an[i] %2 ==0 && an[i] != 0 ){
			printf("Last Even: %d",an[i]);
			break;
		}else if (i== 0 ){
			
			printf("khong co so nao");
		}
		
		
		
	}

}
