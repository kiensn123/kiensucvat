#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a+b>c  and b+c>a and a+c >b){
		int chuvi;
		chuvi = a+b+c;
		int dientich;
		dientich = sqrt(chuvi*(chuvi -a)*(chuvi-b)*(chuvi-c));
		printf("chuvila=%d\n",chuvi);
		printf("dientich=%d",dientich);
		
	}else{
		printf("no khum la tam giac");
	}
}

