#include <stdio.h>
#include <string.h>

int main(){
 
 char vs[20],t[20]; 
 printf("nhap mang  vs\n");//deptrai
 scanf("%s",vs);
 printf("nhap mang t\n");//nhung ma xau
 scanf("%s",t);
 strcat(vs,t);// deptrai nhung ma xau  // noi duoi hai chuoi
 
 printf("%s",vs);
 int kq = strcmp(vs,t); \

	
}
