#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int temp, total, S, choose, a, b, i,j, *t;
	total = 0;
	
	 do {
		printf("\n1.Nhap vao N so nguyen\n2.Hien thi danh sach cac phan thu trong mang\n3.Tin tong cac phan tu trong mang\n4.Sap xep phan tu trong mang theo thu tu tang dan\n5.Thoat");
		printf("\nNhap lua chon choose = ");
		scanf("%d", &choose);
		
		switch(choose){
		case 1:
			printf("\nNhap so phan tu can them cho mang: "); 
			scanf("%d", &a);
			if(total==0){
			total = a;
			t =(int*) calloc (a , sizeof (int));
			}else {
				total = total + a;
			t = (int*) realloc (t, total * sizeof(int));	
			}
			
			for(i=total-a;i<total;i++){
				printf("\nNhap cac phan tu them cho mang t[%d] = ", i);
				scanf("%d", &t[i]);
			}
			break;
			
			case 2:
				for(i=0;i<total;i++){
				printf("\nPhan tu trong mang t[%d] = %d ", i, t[i]);
			}
				break;
				
			case 3:
				S = 0;
				for(i=0;i<total;i++){
				S = S + t[i];
			}
				printf("\nTong cac phan tu trong mang S = %d", S);
				break;
				
			case 4:
				for(i=0;i<total-1;i++){
					for(j=i+1;j<total;j++){
						if (t[i] < t[j]){
							temp = t[i];
							t[i] = t[j];
							t[j] = temp;
						}
					}
				}
				printf("\nDay phan tu tang dan nhu sau: ");
				for(i=0;i<total;i++){
					printf(" %d", t[i]);
				}
			    break;
			case 5:
				printf("Thoat chuong trinh");
				break;
	}
	} while(choose!=5);
	
	return 0;
}
	


