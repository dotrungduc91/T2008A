#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cinema.h"

void showMenu(){
	
	printf("\n1.Nhap du lieu quan ly danh sach rap chieu phim");
	printf("\n2.Hien thi danh sach rap chieu phim");
	printf("\n3.Tim rap theo so ghe toi thieu");
	printf("\n4.Luu du lieu ra tep cinema.dat");
	printf("\n5.Doc du lieu tu tep cinema.dat");
	printf("\n6.Thoat");	
}

void inputCinemaList(Cinema *p){
	int i;
	for(i=0;i<4;i++){
		printf("\nNhap du lieu rap thu %d", i+1);
		
		printf("\nNhap ten: "); 
		fflush(stdin); fflush(stdout);
		gets(p[i].name);
		
		printf("\nNhap dia chi: "); 
		fflush(stdin); fflush(stdout);
		gets(p[i].address);
		
		printf("\nNhap so ghe: "); 
		fflush(stdin); fflush(stdout);
		scanf("%d", &p[i].seats);
	}
}


	
	void sapxep(Cinema *p){
		int i,j;
		for(i=0;i<3;i++){
			for(j=i+1;j<4;j++){
				int cmp;
				cmp= strcmp(p[i].name, p[j].name);
				if(cmp >0){
					Cinema tmp = p[i];
					p[i] = p[j];
					p[j] = tmp;
				}
				
			}
			
		}
	}
	
	
	void inthongtin(Cinema *p){
	int i, j;
	for(i=0;i<70;i++){
		printf("-");
	}
	
		printf("\n|%25s|%35s|%6s", "Name", "Address", "Seats");
		printf("\n");
		
		for(i=0;i<70;i++){
		printf("-");
	}
	
		for(i=0;i<4;i++){
		printf("\n|%25s|%35s|%6d", p[i].name, p[i].address, p[i].seats);
		printf("\n");
		for(j=0;j<70;j++){
			printf("-");
		}
		}
}

	void timtheosoghetoithieu(Cinema *p){
		int count,j,i,min;
		count =0;
		printf("\nNhap so ghe toi thieu: ");
		scanf("%d", &min);
				
		for(j=0;j<70;j++){
				printf("-");
	}
				
				printf("\n|%25s|%35s|%6s", "Name", "Address", "Seats");
				printf("\n");
		
				for(i=0;i<70;i++){
				printf("-");
	}
		
		for(i=0;i<4;i++){
			if(p[i].seats>=min){
//				count++;
				
				printf("\n|%25s|%35s|%6d", p[i].name, p[i].address, p[i].seats);
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

	void savefile(Cinema *p){
	
		FILE *fp;
		fp = fopen("cinema.dat", "wb");
		fwrite(p, sizeof(Cinema), 4, fp );
		fclose(fp);
}
	void readfile(Cinema *p){
		
		FILE *fp;
		fp = fopen("cinema.dat", "rb");
		fread(p, sizeof(Cinema), 4, fp );
		fclose(fp);
		
	}
