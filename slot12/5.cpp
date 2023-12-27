#include<stdio.h>

int main(){
	int n,c,i,giua ,low = 0;
	int co = 0;
	printf("nhap so n");
	scanf("%d",&n);
	int a[n];
	int hight = n;
	while (i<n){
		scanf("%d",&c);
		if (c == 0 and co == 0){
			co = 1;
			a[i] = c;
			i++;
			continue;
		}
		for (int j = 0 ;j<n;j++){
			if (a[j] == c){
				printf("nhap trung vui long nhap lai : ");
				break;
			}else if (a[j] != c && j == n-1) {
				a[i] = c;
				i++;
				
			}	
		}
		
		
		
	}

	
	
	
	
}
