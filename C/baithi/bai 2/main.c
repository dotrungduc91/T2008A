#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kiemtra(int n){
	int i ,count=0;
	if(n<2){
		return 0;
	}
		for(i = 2; i<= sqrt(n); i++){
			if(n % i == 0){
				count++;
			}			
		}
		if(count == 0){
			return 1;
		}
			return 0;
		
		
}

int main(int argc, char *argv[]) {
	
	int n;
	printf("Nhap so can kiem tra n = ");
	scanf("%d",&n);
//	int k = kiemtra(n);
//	printf("%d",k);
//		return 0;
}
