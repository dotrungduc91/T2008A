#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r, num;
	printf("\nNhap gia tri num =");
	scanf("%d", &num);
	
	r = num % 2;
	
	if(r == 0){
		printf("\nSo num la so chan");
	}
	
	else{
		printf("\nSo num la so le");
	}
	printf("\nKet thuc chuong trinh");

	
	return 0;
}
