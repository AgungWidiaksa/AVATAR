#include <stdio.h>

int main(){
	int a,b,c,d,e;
	char p;
	printf("menu : \n");
	printf("1. Segitiga Suku-Siku\n");
	printf("2. Segitiga Jam Pasir \n");
	printf("3. Keluar\n");
	printf("inputkan pilihan anda = ");
	scanf("%d",&p);
	switch(p){
		case 1:
			printf("lebar = ");
			scanf("%d",&a);
			for(b=1;b<=a;b++){
				for(c=1;c<=b;c++){
					printf("* ");
				}
				printf("\n");
			}
		break;
		case 2:
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
		break;
		case 3:
			return 0;
		break;
		default:
			printf("tidak teridentifikasi...");
		break;
	}
}
