//Nhap mang N phan tu, sap xep phan tu tho thu tu giam dan

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int N;
	printf("Nhap N = ");
	scanf("%d", &N);
	
	int temp,a,i, j,t[N];
	
	for(i=0; i<N; i++){
		printf("Nhap gia tri phan tu t[%d] = ", i);
		scanf("%d", &t[i]);	
	}
	
	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if(t[i]<t[j]){
				temp = t[i];
				t[i] = t [j];
				t[j] = temp;
	}
	}		
	}
	printf("\nDay phan tu giam dan nhu sau:");
			
	for (i=0;i<N;i++){
		printf("%d", t[i]);	
	}
	return 0;
	
}
