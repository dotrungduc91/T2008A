#include <stdio.h>
#include <stdlib.h>

typedef sttuct Student_ST{

char name[50], address[200];
int age;
} Student;


int main(int argc, char *argv[]) {
	Student studentlist[3];
	int i,choose, length = 3;
	
	do {
		printf("\n1.Nhap thong tinh sinh vien");
		printf("\n2.Hien thi thong tinh sinh vien");
		printf("\n3.Thoat");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				for(i=0;i<3;i++){
					printf("\nNhap sinh vien thu %d: ", i+1);
					printf("\nNhap ten: ");
					gets(studentlish[i].name);
					
					printf("\nNhap tuoi: ");
					scanf("%d", &studentlish[i].age);
					
					printf("\nNhap dia chi");
					gets(studentlish[i].address);
					
				}
				
				break;
			
			case 2:
				for(i=0;i<3;i++){
					printf("\n%d. Ten: %s, Tuoi: %d, Diachi: %s",studentlish[i].name,studentlish[i].age, studentlish[i].address )
					
				}
				break;
			
			case 3:
				printf("\nGoodbye!!!");
				break;
				
			default:   
				printf("\nNhap sai!!!");
				break;
			
		}
		
		
		
		
	} while(choose !=3);
	
	
	
	return 0;
}
