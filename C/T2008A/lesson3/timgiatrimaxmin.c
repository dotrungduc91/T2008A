#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("bai toan tim gia tri max min cua so nguyen");
	
	int a1, a2, a3, a4; 
	
	printf("nhap gia tri a1=");
	scanf("%d", &a1);
	
	printf("nhap gia tri a2=");
	scanf("%d", &a2);
	
	printf("nhap gia tri a3=");
	scanf("%d", &a3);
	
	printf("nhap gia tri a4=");
	scanf("%d", &a4);
	
	int max = a1;
	
	if(max<=a2){ 
	max = a2;
	}
	
	if(max<=a3){ 
	max = a3;
	}
	
	if(max<=a4){ 
	max = a4;
	}
	
	printf("\ngia tri max = %d", max);
	
	int min = a1;
	
	if(min>=a2){ 
	min = a2;
	}
	
	if(min>=a3){ 
	min = a3;
	}
	
	if(min>=a4){ 
	min = a4;
	}
	
	printf("\ngia tri min = %d", min);
	
	return 0;
}
