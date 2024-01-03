#include <stdio.h>
#include <stdlib.h>

int main(){
 int *arr;
 arr = (int *)malloc (10*sizeof(int));
 
 arr = (int *)calloc(10,sizeof(int));
 for (int i = 0 ;i < 10;i++){
 	*(arr + i ) = i * 10 + 2;
 	
 }
 arr = (int *)realloc( arr,15*sizeof(int));
 for (int i = 10 ;i < 15;i++){
 	*(arr + i ) = i * 10 + 2;
 	
 }
 printf("%d",arr[14]);
 free(arr);

	
}
