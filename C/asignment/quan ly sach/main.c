#include <stdio.h>
#include <stdlib.h>

typedef struct book_st{
	char ten[30], theloai[30];
	int giatien, namxuatban;
} book;

int length = 3;

void menu(book *p){
	printf("\n1.Nhap du lieu tung quyen sach");
	printf("\n2.Sap xep, hien thi thong tin chi tiet cua tung quyen sach theo the loai (Z->A). Thong ke sach theo nam xuat ban");
	printf("\n3.Tim  quyen sach theo the loa");
	printf("\n4.Ghi vao tap tin nhi phan book.dat");
	printf("\n5.Thoat");	
}

void nhapdulieu(book *p){
	
	int i;
	for(i=0;i<length;i++){
		printf("\nNhap thong tin quyen sach %d", i+1);
		
		printf("\nNhap ten: ");
		fflush(stdin), fflush(stdout);
		gets(p[i].ten);
		
		printf("\nNhap theloai: ");
		fflush(stdin), fflush(stdout);
		gets(p[i].theloai);
		
		printf("\nNhap gia tien: ");
		
		fflush(stdin), fflush(stdout);
		scanf("%d", &p[i].giatien);
		
		printf("\nNhap nam xuat ban: ");
		fflush(stdin), fflush(stdout);
		scanf("%d", &p[i].namxuatban);
	}
}

void sapxep(book *p){
		int cmp, i,j;
		book temp;
		for(i=0;i<length-1;i++){
			for(j=i+1;j<length;j++){
				cmp = strcmp(p[i].theloai,p[j].theloai);
				if(cmp>0){
					temp = p[i];
					p[i] = p[j];
					p[j] = temp;
				}
			}
		}
}
	
void hienthisausapxep(book *p){
		printf("\n|%30s|%30s|%10s|%10s","Ten", "The loai", "Gia tien","Nam xuat ban");
		int i;
		for(i=0;i<length;i++){
			printf("\n|%30s|%30s|%10d|%10d",p[i].ten,p[i].theloai,p[i].giatien,p[i].namxuatban);
		}
}	

void thongketheonamxuatban(book *p){
		int i,j;
		int count[3] = {1,1,1};
		for(i=0;i<length-1;i++){
			if(count[i]==0){
				  
				continue;
			}
			for(j=i+1;j<length;j++){
				if(count[j]==0){
				continue;
			}
			
			
			if(p[i].namxuatban==p[j].namxuatban) {
				count[i]++;
				count[j]--;	
			}
		}		
}
		for(i=0;i<3;i++){
				if(count[i]!=0){
					printf("\nNam %d co %d quyen sach", p[i].namxuatban, count[i]);
				}
			}
	
}

	void timtheotheloai (book *p){
		
		char name[50];
		printf("Nhap the loai sach: ");
		fflush(stdin), fflush(stdout);
		gets(name);
		
			printf("\n|%30s|%30s|%10s|%10s","Ten", "The loai", "Gia tien","Nam xuat ban");
			
		int count,i;
		count = 0;
		for(i=0;i<length;i++){
			int cmp = strcmp (name, p[i].theloai);
			
			if(cmp==0){
				printf("\n|%30s|%30s|%10d|%10d",p[i].ten,p[i].theloai,p[i].giatien,p[i].namxuatban);
				count++;
				
			}
			
		}
		
		if(count==0){
			printf("\nKhong co sach thuoc the loai nay");
		}
		
	}
	
	
	void ghidulieu (book *p){
				FILE *fp;
		fp = fopen("book.dat","wb");
		fwrite(p,  sizeof (book), length, fp);
		fclose(fp);
	}


int main(int argc, char *argv[]) {
	
	book bookList[3];
	int choose;
	do{
		menu(bookList);
		
		printf("\nNhap lua chon choose:");
		scanf("%d",&choose);
		
		switch(choose){
			case 1:
				nhapdulieu(bookList);
			break;			
			
			case 2:
				sapxep(bookList);
				hienthisausapxep(bookList);
				thongketheonamxuatban(bookList);
			break;			

			case 3:
				timtheotheloai(bookList);
			break;			

			case 4:
				ghidulieu(bookList);
			break;			

			case 5:
				printf("Thoat");
			break;	
					
			default:
				printf("Nhap choose sai!!!");
			break;
		}
		
		
	}while(choose!=5);
	
	return 0;
}
