#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a = 1;
	int b =1 ;
	int s;
	while (n>0){
         s = a + b;
         a = b;
         b = s ;
         
       
         n--;
		
	  
	}
	printf("thua la %d ",s);



	
}
