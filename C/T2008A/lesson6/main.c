//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//int tinhtong(int n){
//	int S = 0;
//	int i;
//	for(i=0; i<=n; i++){
//		S = S + i;
//	}
//	printf("\nTong S = %d", S);
//	return S;
//}
//
//
//int tinhgiaithua(int m){
//	int T = 1;
//	int i;
//	for(i=1; i<=m; i++){
//		T = T * i;
//	}
//	printf("\nTong giai thua = %d", T);
//	return T;
//}
//int main(int argc, char *argv[]) {
//
//
//	int S = tinhtong(10), T = tinhgiaithua(5);
//	tinhtong(10);
//	tinhgiaithua(5);
//	
//	
//	if(S >= T){
//		printf( "\n5 giai thua < tong 1-10");
//	} else {
//		printf( "\n5 giai thua >= tong 1-10");
//	}
//	
//	
//	return 0;
//	
//}


//Bai 3:
#include <stdio.h>
#include <stdlib.h>

int tinhgiaithua(int n){
	int giaithua = 1;
	int i;
	for(i=1; i<=n; i++){
		giaithua = giaithua * i;
	}
	printf("\nGiai thua cua %d = %d", n , giaithua);
	return giaithua;
}

int tinhtong(int m){
	int tong = 0;
	int i;
	for(i=0; i<=m; i++){
		tong = tong + i;
	}
	printf("\nTong tu 1 - %d = %d", m, tong);
	return tong;
}
int main(int argc, char *argv[]) {
int G,T;
int n, m;

printf("Nhap giai thua cua n= "); scanf("%d", &n);
printf("Tinh tong cac so 1 - m, nhap m= "); scanf("%d", &m);

G= tinhgiaithua(n);
T= tinhtong(m);
	
	if(T>=G){
		printf("\nTong tu 1 - %d >= Giai thua cua %d", m, n);
	} else{
		printf("\nTong tu 1 - %d < Giai thua cua %d", m, n);
	}
	return 0;
	
}
