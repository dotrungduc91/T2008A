#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Cinema_ST{
	char name[25], address[35];
	int seats;
}Cinema;

void ShowMenu();

void inputCinemalList(Cinema *p);

void sort(Cinema *p);

void displayCinemaList(Cinema *p);

void searchByMinSeats(Cinema *p);

void saveFile(Cinema *p);

void readFile(Cinema *p);

void ShowMenu();

int main(int argc, char *argv[]) {
	
	Cinema cinemaList[4];
	int choose;
	
	do{
		ShowMenu();
		scanf("%d", &choose);
		
	switch(choose){
		case 1:
			inputCinemalList(cinemaList);
		break;
		
		case 2:
			sort(cinemaList);
			displayCinemaList(cinemaList);
			
		break;

		case 3:
			searchByMinSeats(cinemaList);
		break;

		case 4:
			saveFile(cinemaList);
		break;
			
		case 5:
			readFile(cinemaList);
		break;

		case 6:
			printf("Ket thuc chuong trinh");
		break;

		default:
			printf("Nhap sai !!!");
		break;
		
	}
	}while(choose!=6);
	
	return 0;
}


void ShowMenu(){
	printf("\n1.Nhap du lieu ");
	printf( "\n2.Hien thi du lieu ");
	printf( "\n3.Tim kiem ");
	printf ( "\n4.Luu Data");
	printf("\n5.Doc Data ");
	printf("\n6.Thoat chuowng trinh");
	printf("\nChon choose: ");
}

void inputCinemalList(Cinema *p){
	
	int i;
	for(i=0;i<4;i++){
		printf("\nNhap ten rap chieu phim thu %d: ", i+1);
		fflush(stdin), fflush(stdout);
		gets(p[i].name);
		
		printf("\nNhap dia chi rap: ");
		fflush(stdin), fflush(stdout);
		gets(p[i].address);
		
		printf("\nNhap so ghe: ");
		fflush(stdin), fflush(stdout);
		scanf("%d", &p[i].seats);
	}
	
}

void sort(Cinema *p){
	int i,j;
	for(i=0;i<3;i++){
		for(j=i+1;j<4;j++){
			int cmp = strcmp (p[i].name, p[j].name);
			if(cmp>0){
				Cinema tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
				
			}
			
		}
	}
	
}

void displayCinemaList(Cinema *p){
	int j,i;
	for(i=0;i<70;i++){
		printf("-");	
	}
	printf("\n%25s|%35s|%6s", "Name", "Address", "Seats");
	printf("\n");
	
	for(i=0;i<70;i++){
		printf("-");	
	}
	
	for(i=0;i<4;i++){
		printf("\n%25s|%35s|%6d", p[i].name, p[i].address, p[i].seats);
		printf("\n");
		for(j=0;j<70;j++){
		printf("-");	
	}
	}
	}
	
	void searchByMinSeats(Cinema *p){
		int i,j, minseats;
		printf("Nhap so ghe toi thieu: ");
		scanf("%d", &minseats);
		
		for(i=0;i<70;i++){
		printf("-");	
	}
		printf("\n%25s|%35s|%6s", "Name", "Address", "Seats");
		printf("\n");
	
		for(i=0;i<70;i++){
		printf("-");	
	}
		int count = 0;
		
		for(i=0;i<4;i++){
			if(p[i].seats >= minseats){
				count++;
				printf("\n%25s|%35s|%6d", p[i].name, p[i].address, p[i].seats);
				printf("\n");
				for(j=0;j<70;j++){
				printf("-");	
	}

			}
		}
			if(count==0){
				printf("\nKhong co rap nao phu hop");
			}	
	}

	
	void saveFile(Cinema *p){
		FILE *fp;
		fp = fopen("cinema.dat", "wb");
		fwrite(p, sizeof (Cinema), 4, fp);
		fclose(fp);
	}

	void readFile(Cinema *p){
		FILE *fp;
		fp = fopen("cinema.dat", "rb");
		fread(p, sizeof (Cinema), 4, fp);
		fclose(fp);
		
	}		
	

