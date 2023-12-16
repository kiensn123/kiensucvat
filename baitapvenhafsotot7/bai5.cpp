#include <stdio.h>
int main(){
	int n,max;
	scanf("%d",&n);
	int a = 0;
	
	while (n>0){
		a = n%10;
		n = n/10 ;
		if (max <= a){
			max = a;
		}
	    if (n == 0){
		
		    printf("%d",max);	
		}
	}
	
	
	
}
