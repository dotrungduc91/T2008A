//
//#include <stdio.h>
//#include <stdlib.h>
//# include <string.h>
//
//typedef struct Student {
//	char name[50], email[50], address[50];
//	int old;
//} Student;
//
//int main(int argc, char *argv[]) {
//	
//	int i;
//	
//	Student std[2];
//	
//	Student *p;
//	p = &std[0];
//	
//	for(i=0;i<2;i++) {
//	fflush(stdin), fflush(stdout);
//	printf("Nhap ten: "); gets( (p+i)->name);  //Hoi tai sao t[i] = p[i] , le ra phai la *[p+i}
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap email: "); gets((p+i)->email);
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap diachi: "); gets((p+i)->address);
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap tuoi: "); scanf("%d", &(p+i)->old);
//	}
//		
//	for(i=0;i<2;i++) {
//	printf("\nTen: %s, Email: %s, Diachi: %s, Tuoi: %d", std[i].name, std[i].email, std[i].address, std[i].old);
//	}
//	
//	return 0;
//}



//#include <stdio.h>
//#include <stdlib.h>
//# include <string.h>
//
//typedef struct Student {
//	char name[50], email[50], address[50];
//	int old;
//} Student;
//
//int main(int argc, char *argv[]) {
//	
//	int i;
//	
//	Student *p;
//
//	p = (int*) calloc (2, sizeof(int));
//	
//	for(i=0;i<2;i++) {
//	fflush(stdin), fflush(stdout);
//	printf("Nhap ten: "); gets( (p+i)->name);  //Hoi tai sao t[i] = p[i] , le ra phai la *[p+i}
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap email: "); gets((p+i)->email);
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap diachi: "); gets((p+i)->address);
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap tuoi: "); scanf("%d", &(p+i)->old);
//	}
//	printf("Nhap them thong tin sinh vie");
//	p = (int*) realloc (p, 3 * sizeof (int));
//	
//	for(i=2;i<3;i++) {
//	fflush(stdin), fflush(stdout);
//	printf("Nhap ten: "); gets( (p+i)->name);  //Hoi tai sao t[i] = p[i] , le ra phai la *[p+i}
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap email: "); gets((p+i)->email);
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap diachi: "); gets((p+i)->address);
//	
//	fflush(stdin), fflush(stdout);
//	printf("Nhap tuoi: "); scanf("%d", &(p+i)->old);
//	}
//	
//	for(i=0;i<3;i++) {
//	printf("\nTen: %s, Email: %s, Diachi: %s, Tuoi: %d", p[i].name, p[i].email, p[i].address, p[i].old);
//	}
//	
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Vidu: nhap 1 so nguyen x
	int x;
	printf("\nNhap x = ");
	scanf("%d", &x);//x = 10
	
	printf("\ngia tri: %d, dia chi: %X", x, &x);
	
	//Pointer => la 1 bien => dia chi & du lieu luu => dia chi cua 1 bien khac
	//Khai bao pointer
	int *p;
	//dia chi pointer p => &p
	//gia tri cua pointer => p
	
	p = &x;
	//gia tri bien ma con tro dang tro toi
	//*p => tra ve gia tri cua bien no dang tro toi => gia cuoi cung
	printf("\nDia chi: %X, gia tri: %X, gia tri cuoi cung: %d", &p, p, *p);
	
	//Bat dau test
	x = 10;
	*p = *p + 1;
	printf("\n x = %d, *p = %d", x, *p);
	
	x++;
	printf("\n x = %d, *p = %d", x, *p);
	
	*p = x + 2;
	printf("\n x = %d, *p = %d", x, *p);
	
	int *q;
	q = p;
	
	*q = *p + 2;
	printf("\n x = %d, *p = %d, *q = %d", x, *p, *q);
	printf("\n &x = %X, p = %X, q = %X", &x, p, q);
	
	//Tim hieu mang 1 chieu
	int t[5], i;
	//Nhap phan tu cua mang
	printf("\nNhap phan tu cua mang t");
	for(i=0;i<5;i++) {
		printf("\nNhap t[%d] = ", i);
		//scanf("%d", &t[i]);
		scanf("%d", t + i);
	}
	
	int *k;//*k = t => khai bao nhanh.
	k = t;
	for(i=0;i<5;i++) {
		printf("\nNhap k[%d] = %d", i, k[i]);
	}
	//t -> 1, 7, 0, 2, 10
	*k++;
	printf("\n*k = %d, *t = %d", *k, *t);
	//Mang dong.
	int *f;
	//Lam the nao cap phat bo nho cho mang f => cap phat cho mang f => gom 3 so nguyen
	f = (int *) malloc (3 * sizeof(int));
	//cap phat cho con tro f => 1 mang gom 3 phan tu
	//int f[3];
	
	for(i=0;i<3;i++) {
		printf("\nNhap f[%d] = ", i);
		scanf("%d", f + i);
	}
	
	free(f);//giai phong du lieu cap phat cho f.
	
	//calloc & realloc.
	//tao mang dong : t0 => 1, t1 => 3, t2 => 5, t3 => 8
	int *fk;
	fk = (int *) calloc (1, sizeof(int));
	for(i=0;i<1;i++) {
		printf("\nNhap fk[%d] = ", i);
		scanf("%d", fk + i);
	}
	//luc sau so luong phan tu mang fk => tang them 2 => length: 3
	fk = (int *) realloc (fk, 3 * sizeof(int));
	for(i=1;i<3;i++) {
		printf("\nNhap fk[%d] = ", i);
		scanf("%d", fk + i);
	}
	
	for(i=0;i<3;i++) {
		printf("\nNhap fk[%d] = %d", i, fk[i]);
	}
	
	return 0;
}
