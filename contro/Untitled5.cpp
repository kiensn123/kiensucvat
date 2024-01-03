#include <stdio.h>
#include <string.h>
#include <cctype>
int main(){
 
 char vs[5][20],luu[20]; 
 printf("nhap mang  vs\n");//deptrai
 
 
 for (int i =0 ; i<5;i++){
 	
 	scanf("%s",vs[i]);
 	
 }


 for (int i = 0;i <5 ;i++){
 	for (int j = 0;j<4-i;j++){
 		int kq = strcmp(vs[j],vs[j+1]);
 		if (kq > 0){
 		
 		
 			
            strcpy(luu, vs[j]);
            strcpy(vs[j],vs[j+1]);
            strcpy(vs[j+1],luu);	  
 			
		}
 		
 		
 		
 		
	 }
 	
 	
 }
 
 
 for (int i = 0;i<5;i++){
 	
 	printf("%s",vs[i]);
 	
 }
 
 

	
}
