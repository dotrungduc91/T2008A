#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50];
	char age[50];
	int phone;
	int choose;
	
	do{
		printf("\n1.Nhap thong tin sinh vien");
		printf("\n2.Hien thi thong tin sinh vien");
		printf("\n3.Ket thuc ");
	
		printf("\nNhap lua chon choose:  ");
		scanf("%d", &choose);
		
		switch(choose){
		case 1:
		fflush(stdin), fflush(stdout);
		printf("Nhap ten sinh vien: "); gets(name);
		
		fflush(stdin), fflush(stdout);
		printf("Nhap tuoi sinh vien: "); gets(age);
		
		fflush(stdin), fflush(stdout);
		printf("Nhap sdt sinh vien: "); scanf("%d", &phone);
		
		
		break;
		
		case 2:
		printf("\nTen sinh vien: %s", name);
		printf("\nTuoi sinh vien: %s", age);
		printf("\nSDT sinh vien: %d", phone);	
		break;
		
		case 3:
		printf("Ket thuc chuong trinh");
		break;
		}
		
	} while (choose!=3);
	
	
	
	
	return 0;
}
