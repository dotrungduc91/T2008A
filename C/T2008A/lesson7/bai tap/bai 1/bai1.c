//Nhap mang N phan tu, nhap gia tri tung phan tu, day cac phan tu so chan len dau, so le ve cuoi
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int temp,i,j,N;
	printf("Nhap N: ");
	scanf ( "%d", &N);
	
	int t[N];
	
	for(i=0; i<N; i ++){
		printf("Nhap phan tu t[%d] =", i);
		scanf("%d", &t[i]);
	}
	
	
	for(i=0; i<N-1;i++){
		for(j=i+1; j<N;j++){
			if(t[j] %2 ==0){
				temp = t[i];
				t[i] = t [j];
				t[j] = temp;	
			}	
		}	
	}
	printf("Day phan tu sau khi sap xep:");
	for(i=0; i<N ;i++){
		printf("%d", t[i]);
	}
		
	return 0;
}
