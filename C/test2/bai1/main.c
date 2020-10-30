//Bai1

#include <stdio.h>
#include <stdlib.h>
# include <math.h>


int main(int argc, char *argv[]) {
	
	int N;
	printf("Nhap N: ");
	scanf("%d", &N);
	
	int i, t[N];
	
	int sum = 0;
	
	for(i=0; i<N;i++){
		printf("Nhap gia tri cho so nguyen thu %d:  ", i+1 );
		scanf("%d", &t[i]);	
	}
	
	for(i=0;i<N;i++){
		if(t[i] % 5 == 0){
			sum = sum + t[i];		
		}
	}
	
	printf("Tong cac so chia het cho 5 la: %d", sum);
	
	printf("\nCac so chinh phuong la: ");
	
	for(i=0;i<N;i++){
		int a = sqrt(t[i]);
			if(a*a == (t[i])){
			 printf("\n%d", t[i]);	
		}
	}
	
	
	int j;
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			
			if(t[j] % 2 ==0 ){
				int temp = t[i];
				t[i] = t[j];
				t[j] = temp;
			}
		
		}
			
	}
	printf("\nDay so sau sap xep, cac so chan len dau, so le ve cuoi nhu sau: ");
	
	for(i=0;i<N;i++){
		printf("\n%d", t[i]);
	}
	

	return 0;
}
