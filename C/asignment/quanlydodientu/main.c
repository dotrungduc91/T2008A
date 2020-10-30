#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct spdientu_st{
	char ten[20], ma[15], nhasx[20];
	long int gia;	
} spdientu;

void menu();

void nhapdulieu(spdientu *t);

void sapxep(spdientu *t);

void hienthisapxep(spdientu *t);

void thongkesoluong(spdientu *t);

void timnhasanxuat(spdientu *t);

void ghidulieu(spdientu *t);

int main(int argc, char *argv[]) {
	int choose;
	spdientu danhsachsp[3];
	
	do{
		menu();
		
		printf("\nChon choose: ");
		scanf("%d", &choose);
		
		switch(choose){
			case 1:
				nhapdulieu(danhsachsp);
				break;
			
			case 2:
				sapxep (danhsachsp);
				hienthisapxep (danhsachsp);
				thongkesoluong(danhsachsp);
				break;
				
			case 3:
				timnhasanxuat (danhsachsp);
				break;
				
			case 4:
				ghidulieu(danhsachsp);
				break;
				
			case 5:
				printf("Ket thuc chuong trinh!!!");
				break;
			
			default:
				printf("Nhap sai choose!!!!");
				break;
			
		}
		
	}while(choose!=5);
	
	return 0;	
}


void menu(){
	printf("\n1.Nhap du lieu tung san pham");
	printf("\n2.Sap xep va hien thi thong tin chi tiet cua tung san pham theo ten (Z->A), thong ke theo nha san xuat");
	printf("\n3.Tim  san pham theo nha san xuat");
	printf("\n4.Ghi vao tap tin nhi phan spdientu.dat");
	printf("\n5.Thoat");
}

void nhapdulieu(spdientu *t){
	int a = 0;
	int i;
	for(i=0;i<3;i++){
		printf("\nNhap thong tin san pham thu %d", i+1);
		fflush(stdin), fflush(stdout);
		printf("\nTen: ");
		gets(t[i].ten);
		
		fflush(stdin), fflush(stdout);
		printf("\nMa: ");
		gets(t[i].ma);
		
		fflush(stdin), fflush(stdout);
		printf("\nNha san xuat: ");
		gets(t[i].nhasx);
		
		fflush(stdin), fflush(stdout);
		printf("\nGia: ");
		scanf("%d", &t[i].gia);	
		
		
		}		
	}
	
	void sapxep(spdientu *t){
		int i,j;
		for(i=0;i<2;i++){
			for(j=i+1;j<3;j++){
				int cmp = strcmp (t[i].ten, t[j].ten);
				if(cmp>0){
					spdientu tmp = t[i];
					t[i] = t[j];
					t[j] = tmp;	
				}			
			}
		}	
	}
	
	
	void hienthisapxep(spdientu *t){
		printf("\n|%10s|%20s|%15s|%20s|%15s|","STT","Ten", "Ma", "Nhasanxuat", "Gia");
		
		int i;
		for(i=0;i<3;i++){
		printf("\n|%10d|%20s|%15s|%20s|%15d|", i+1, t[i].ten, t[i].ma, t[i].nhasx,t[i].gia);
		}		
	}
	
	void thongkesoluong(spdientu *t){
		int i,j;
		int count[3] = {1,1,1};
			for(i=0;i<2;i++){
				if(count[i]==0){
					continue;
				}
				for(j=i+1;j<3;j++){
				if(count[j]==0){
					continue;
				}
				int cmp = strcmp(t[i].nhasx, t[j].nhasx);
				if(cmp==0){
					count[i]++;
					count[j]--;	
				}
				}
				
			}
				for(i=0;i<3;i++){
					if(count[i]!=0){
						printf("\nSo san pham cua nha san suat %s la: %d", t[i].nhasx, count[i] );
					}
				}
		}
	
	void timnhasanxuat(spdientu *t){
		char tennhasx[50];
		printf("\nNhap ten nha san xuat: ");
		fflush(stdin), fflush(stdout);
		gets(tennhasx);
		
		printf("\n|%10s|%20s|%15s|%20s|%15s|","STT","Ten", "Ma", "Nhasanxuat", "Gia");
		
		int i,cmp;
		int count = 0;
		for(i=0;i<3;i++){
			cmp = strcmp(tennhasx, t[i].nhasx);
			if(cmp==0){
				count++;
			printf("\n|%10d|%20s|%15s|%20s|%15d|", i+1, t[i].ten, t[i].ma, t[i].nhasx,t[i].gia);	
			}	
		}

		if(count==0){
			printf("\nKhong co san pham nao cua nha san xuat nay");
		}
		
	}
	
	
	void ghidulieu(spdientu *t){
		FILE *fp;
		fp = fopen("spdientu.dat","wb");
		fwrite(t, sizeof (spdientu), 3,fp);
		fclose(fp);
		
	}
	
	
	

