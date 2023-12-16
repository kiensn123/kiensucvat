#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	int bien = n;
    int a = 0;
	while (n>0) {
	   
		if (bien % n == 0 ) {
		   a += n;
		} 
		n--;
    
	
	}
	printf("tong uoc cua n la  %d",a);
	
}
