#include <stdio.h>
#include <stdlib.h>

//Nhap mang N so nguyen, hoan doi vi tri phan tru trong mang theo chieu nguoc lai

int main(int argc, char *argv[]) {
	
	int N;
	printf("Nhap N"); scanf("%d", &N);
	
	int t[N];
	int i,N1;
	
	for(i=0;i<N;i++){
		printf("Nhap phan tu t[%d]", i);
		scanf("%d", &t[i]);	
	}
	int temp;
 	N1=N/2;
 	
 	for(i=0;i<N1;i++){
 		temp = t[i];
 		t[i] = t[N-i-1];
 		t[N-i-1] = temp;
	 }
	
	for(i=0;i<N;i++){
 		printf("%d", t[i]);
	 }
	return 0;
}
