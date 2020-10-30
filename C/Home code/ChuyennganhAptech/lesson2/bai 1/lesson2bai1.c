#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("\nNhap gia tri a=");
	scanf("%d", &a);
	
	int a2, a3, a4;
	a2=a*a;
	a3=a2*a;
	a4=a3*a;
	
	printf("\ngia tri a2= %d", a2);
	printf("\ngia tri a3= %d", a3);
	printf("\ngia tri a4= %d", a4);
	
	return 0;
}
