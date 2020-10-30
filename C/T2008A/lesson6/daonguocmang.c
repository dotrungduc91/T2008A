#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N;
	printf("Nhap N ="); scanf("%d", &N);
	int t[N];
	
	int i;
	for(i=0;i<N;i++){
		printf("Nhap phan tu t[%d]= ", i);
		scanf("%d", &t[i]);
	}
	
	int a, N2 = N/2;
	for(i=0;i<N/2;i++){
		
		a = t[i];
		t[i] = t[N-1-i];
		t[N-1-i] = a;
		
	}
	
	printf("\n Danh sach cac phan tu trong mang");
	
	for(i=0;i<N;i++){
		printf("%d", t[i]);
	}
	
	return 0;
}
