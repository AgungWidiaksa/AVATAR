#include <stdio.h>

int main(){
	int a,b,c,d,e;
	printf("lebar = ");
	scanf("%d",&a);
	e=a % 2;
	if(e!=0){
		for(b=1;b<=a;b++){
			for(c=1;c<=b;c++){
				printf(" ");
			}
			for(d=a;d>=b;d--){
				printf("* ");
			}
			printf("\n");
		}	
		for(b=1;b<=a;b++){
			for(d=a;d>=b;d--){
				printf(" ");
			}
			for(c=1;c<=b;c++){
				printf("* ");
			}
			printf("\n");
		}
	}
	else{
		printf("lebar berjumlah ganjil..!!!");
	}
}
