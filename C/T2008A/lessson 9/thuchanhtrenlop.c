#include <stdio.h>
#include <stdlib.h>



int length = 3;

typedef struct Student_ST{
	char name[50], address[200];
	int age;
} Student;

void showmenu(){
	printf("\n1.Nhap thong tin sinh vien");
	printf("\n2.Hien thi thong tin sinh vien");
	printf("\n3.Thoat");
	
}

void nhapthongtin(Student*p){
	int i;
	for(i=0;i<length;i++){
		printf("\nNhap thong tin sinh vien %d", i +1);
		
		printf("\nNhap ten: "); 
		fflush(stdin), fflush(stdout);
		gets(p[i].name);
		
		printf("\nNhap dia chi: "); 
		fflush(stdin), fflush(stdout);
		gets(p[i].address);	
		
		printf("\nNhap tuoi: "); 
		fflush(stdin), fflush(stdout);
		scanf("%d", &p[i].age);	
	}	
}

void Display(Student*p){
	int i;
	printf("\n|%20s|%20s|%20s", "Ten", "Diachi", "Tuoi");
	
	for(i=0;i<length;i++){
	printf("\n|%20s|%20s|%20d", p[i].name, p[i].address, p[i].age);	
		
	}

}

int main(int argc, char *argv[]) {
	
	int choose;
	Student List[length];
	do{
		showmenu();
		printf("\n Chon:  ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				nhapthongtin(List);
				break;
			
			case 2:
				Display(List);
				break;
			
			
			case 3:
				printf("Thoat");
				break;
			
			default:
				printf("Nhap sai!!!");
				break;
			
		}		
		
	}while(choose!=3);
	
	
	return 0;
}
