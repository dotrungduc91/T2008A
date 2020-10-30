#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct TranhTheu_ST {
	char ten[30], tacgia[30];
	int chieudai, chieurong, giaban;
} TranhTheu;

void showMenu();
void nhapThongTin(TranhTheu *p);
void sapXep(TranhTheu *p);
void hienThi(TranhTheu *p);
void thongKe(TranhTheu *p);
char *layKhoTranh(TranhTheu th);

int main(int argc, char *argv[]) {
	TranhTheu dsTranh[3];
	int choose;
	
	do {
		showMenu();
		scanf("%d", &choose);
		
		switch(choose) {
			case 1:
				nhapThongTin(dsTranh);
				break;
			case 2:
				sapXep(dsTranh);
				hienThi(dsTranh);
				thongKe(dsTranh);
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				printf("\nThoat!!!");
				break;
			default:
				printf("\nNhap sai!!!");
				break;
		}
	} while(choose != 5);
	
	return 0;
}

void showMenu() {
	printf("\n1. Nhap thong tin");
	printf("\n2. Sap xep, thong ke, hien thi");
	printf("\n3. Tim theo gia ban");
	printf("\n4. Save file");
	printf("\n5. Thoat");
	printf("\nChon: ");
}


void nhapThongTin(TranhTheu *p) {
	int i;
	for(i=0;i<3;i++) {
		printf("\nNhap thong tin cho buc tranh thu %d:", i+1);
		printf("\nNhap ten: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].ten);
		
		printf("\nTac gia: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].tacgia);
		
		printf("\nChieu dai: ");
		scanf("%d", &p[i].chieudai);
		
		printf("\nChieu rong: ");
		scanf("%d", &p[i].chieurong);
		
		printf("\nGia ban (USD): ");
		scanf("%d", &p[i].giaban);
	}
}

void sapXep(TranhTheu *p) {
	int i, j, d1, d2;
	
	for(i=0;i<2;i++) {
		d1 = p[i].chieudai * p[i].chieurong;
		
		for(j=i+1;j<3;j++) {
			d2 = p[j].chieudai * p[j].chieurong;
			
			if(d1 < d2) {
				//Hoan doi vi tri.
				TranhTheu tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}

void hienThi(TranhTheu *p) {
	int i, limit = 70;
	
	//Header
	printf("\n");
	for(i=0;i<limit;i++) {
		printf("=");
	}
	
	printf("\nDanh sach tranh");
	
	printf("\n");
	for(i=0;i<limit;i++) {
		printf("=");
	}
	
	printf("\n%3s||%10s||%10s||%10s||%10s||%10s||%5s", 
		"STT", "Ten", "Tac Gia", "Chieu Dai", 
		"Chieu Rong", "Gia Ban", "Kho");
	//Hien thi du lieu
	for(i=0;i<3;i++) {
		char *kho = layKhoTranh(p[i]);
		
		printf("\n%3d||%10s||%10s||%10d||%10d||%10d||%5s", 
			i+1, p[i].ten, p[i].tacgia, p[i].chieudai, 
			p[i].chieurong, p[i].giaban, kho);
	}
	
	//Footer
	printf("\n");
	for(i=0;i<limit;i++) {
		printf("=");
	}
}

char *layKhoTranh(TranhTheu th) {
	int dt = th.chieudai * th.chieurong;
	
	if(dt >= 10000) {
		return "Lon";
	} else if(dt >= 2000) {
		return "Trung Binh";
	}
	return "Nho";
}

void thongKe(TranhTheu *p) {
	int i, j;
	int count[3];
	char *k1, *k2;
	
	for(i=0;i<3;i++) {
		count[i] = 1;
	}
	
	for(i=0;i<2;i++) {
		if(count[i] == 0) continue;
		k1 = layKhoTranh(p[i]);
		
		for(j=i+1;j<3;j++) {
			if(count[j] == 0) continue;
			k2 = layKhoTranh(p[j]);
			
			int cmp = strcmp(k1, k2);
			if(cmp == 0) {
				count[i]++;
				count[j]--;
			}
		}
	}
	
	for(i=0;i<3;i++) {
		if(count[i] == 0) continue;
		k1 = layKhoTranh(p[i]);
		
		printf("\nKho %s co %d buc tranh", k1, count[i]);
	}
}
