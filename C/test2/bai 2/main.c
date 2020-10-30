//Bai 2:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct sinhvien_st{
	char name[50], rollno[20];
	int age;

} sinhvien;

int main(int argc, char *argv[]) {
	
	int a,i,N;
	printf("Nhap N:  ");
	scanf("%d", &N);

	sinhvien t[N];
	
	for(i=0;i<N;i++){
		printf("\nNhap thong tin sinh vien thu %d", i+1);
		printf("\nNhap ten: ");
		fflush(stdin), fflush(stdout);
		gets(t[i].name);
		
		printf("\nNhap ma sinh vien: ");
		fflush(stdin), fflush(stdout);
		gets(t[i].rollno);
		
		printf("\nNhap tuoi sinh vien: ");
		fflush(stdin), fflush(stdout);
		scanf("%d",&t[i].age);
	
	}
	
		printf("\nThong tin sinh vien co tuoi la so chinh phuong nhu sau:");
		printf("\n|%15s|%15s|%15s|", "Ten","Ma SV", "Tuoi");
		
	for(i=0;i<N;i++){
		a = sqrt(t[i].age);

		if(a*a == t[i].age){
			printf("\n|%15s|%15s|%15d|", t[i].name, t[i].rollno, t[i].age );
			
		}
	}
		
	return 0;
}
