#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Giai he phuong trinh ax2 + bx + c = 0");
	
	float a, b, c, x, x1, x2, delta;
	printf("\nNhap gia tri a =");
	scanf("%f", &a);
	
	printf("\nNhap gia tri b =");
	scanf("%f", &b);
	
	
	printf("\nNhap gia tri c =");
	scanf("%f", &c);
	
if(a == 0){
	if(b == 0){
		if(c==0){
			printf("Phuong trinh vo so nghiem");
		}
		else{
		printf("Phuong trinh vo nghiem");
		}
	}
	else{
	x = -x/b;
	printf("phuong trinh co nghiem duy nhat x = %f", x);
	}
}
else{
	delta = b*b - 4*a*c;
	if (delta == 0){
		x = -b/2/a;
			printf("phuong trinh co nghiem duy nhat x = %f", x);
	}
	else{
		if(delta < 0){
			printf(" phuong trinh vo nghiem");
		}
		else{
			x1 = (-b - sqrt(delta))/2/a;
			x2 = (-b + sqrt(delta))/2/a;
			printf("phuong trinh co 2 ngiem x1,x2 = %f, %f", x1, x2);
		}
	}
}
	return 0;
}
