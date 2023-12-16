#include <stdio.h>
int main(){
	int n;
	float S=0;
	scanf("%d",&n);
	int sodau = 1;
	while (sodau != n){
		sodau ++;
	    S +=  (1/(float)sodau);
	  
	}
	printf("tong la %f",S);

	
	
}
