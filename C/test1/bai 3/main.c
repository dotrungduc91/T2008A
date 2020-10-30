//Bai 3
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	
	int i = 0;
	float a, b, S, r, C;
	

	while(1){
		
	printf("\nNhap lua chon");
	printf("\n1. Tinh chu vi hinh chu nhat");
	printf("\n2. Tinh dien tich hinh chu nhat");
	printf("\n3. Tinh chu vi hinh tron");
	printf("\n4. Tinh dien tich hinh tron");
	printf("\n5. Thoat");
	
	printf("\nChoose: ");
	scanf("%d", &i);
		
		switch(i){
		case 1:
			printf("Nhap chieu dai a="); scanf("%f", &a);
			printf("Nhap chieu rong b="); scanf("%f", &b);
			C = 2*(a+b);
			printf("Chu vi chu nhat C= %f", C);
			break;
		case 2:
			printf("Nhap chieu dai a="); scanf("%f", &a);
			printf("Nhap chieu rong b="); scanf("%f", &b);
			S = a*b;
			printf("Chu vi chu nhat S= %f", S);
			break;
		case 3:
			printf("Nhap ban kinh r="); scanf("%f", &r);
			C = 2*3.14*(r);
			printf("Chu vi hinh tron C=%f", C);
			break;
		case 4:
			printf("Nhap ban kinh r="); scanf("%f", &r);
			S = 3.14*(r*r);
			printf("Dien tich hinh tron S= %f", S);
			break;
		case 5:
			printf("thoat chuong trinh");
			exit(0);
		default:
			printf("nhap sai");
			break;
	}
	}
		return 0;
}
