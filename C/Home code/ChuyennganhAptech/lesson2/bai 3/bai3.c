#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b;
	
	printf("\nNhap gia tri a =");
	scanf("%f", &a);
	
	printf("\nNhap gia tri b =");
	scanf("%f", &b);
	
float c, d, e, f;
c = a+ b;
d = a-b;
e = a*b;
f = a/b;

printf("\na + b = %f", c);
printf("\na - b = %f", d);
printf("\na x b = %f", e);
printf("\na : b = %f", f);

	return 0;
}
