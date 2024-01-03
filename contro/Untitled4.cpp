#include <stdio.h>
#include <string.h>
#include <cctype>
int main(){
 
 char vs[20],t[20]; 
 printf("nhap mang  vs\n");//deptrai
 scanf("%s",vs);
 int l = strlen(vs);
 for (int i=0 ;i<l;i++){
 	int cc = vs[i];
 	if (cc>96 && cc<123){
 		printf("%c",cc-32);
 		
	}else{
		
		printf("%c",vs[i]);
	}
 	
 }
 

	
}
