#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a = 0;
	while (n>0){
		a = n%10;
		n = n/10 ;
	    if (n == 0){
		
		    printf("%d",a);	
		}
	}
	
	
	
}
