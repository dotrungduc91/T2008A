
//B�i 1 : Nh?p v�o m?ng g?m N s? nguy�n - In ra danh s�ch ngu?c c?a m?ng d�

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	
	printf("Nhap N"), scanf("%d", &N);
	int i,t[N];
	
	for(i=0;i<N;i++){
		printf("Nhap phan tu t[%d] = ",i);
		scanf("%d", &t[i]);	
	}
	
	for(i=N-1;i>=0;i--){
		printf("\n%d",t[i]);
	}
	
	
	
	return 0;
}
