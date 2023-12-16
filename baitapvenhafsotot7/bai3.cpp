#include <stdio.h>
int main(){
	int n,c;
	scanf("%d",&n);
	int a = 0;
	while (n>0){
		
		a = n%10;
		n = n/10 ;
	    c = c + a;
	   
	}
	printf("%d",c);
	
	
	
}
