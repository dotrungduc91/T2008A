#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N;
	printf("NHap so phan tu trong mang N ="); scanf("%d", &N);
	
	int t[N], i;
	
	
	for(i=0;i<N;i++){
		printf("Nhap cac phan tu trong mang t[%d] = ", i);
		scanf("%d", &t[i]);
	}
	
	int S = 0;
	
	for(i=0;i<N;i++){
		S = S + t[i];
	}
	
	
		for(i=0;i<N;i++){
		printf("Tong cac phan tu trong mang = %d", S);
	}	
	
	
	return 0;	
}
