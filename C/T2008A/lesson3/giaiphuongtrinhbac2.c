#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Giai phuong trinh ax2 + bx + c = 0
int main(int argc, char *argv[]) {
	float a,b,c,x2,x1,x, delta;
		printf("Nhap gia tri a ="); 
		scanf("%f", &a);
		printf("Nhap gia tri b ="); 
		scanf("%f", &b);
		printf("Nhap gia tri c ="); 
		scanf("%f", &c);
		
	if (a == 0){
		if(b == 0){
			if(c==0){
				printf("phuong trinh vo so nghiem");
			}else{
				printf("phuong trinh vo nghiem");
			}
		}else{
			x = -c/b;
			printf("phuong trinh co nghiem duy nhat x = %f", x);
		}
	}else{
		delta = b*b - 4*a*c;
			
			if(delta<0){
				printf("phuong trinh vo nghiem");
			}else{
					if(delta==0){
						x = -b/2/a;
						printf("phuong trinh co mot nghiem x=%f", x);
					}else{
						x1 = -b/2/a + sqrt(delta)/2/a;
						x2 = -b/2/a - sqrt(delta)/2/a;
						printf("phuong trinh co  nghiem x1,x2  =%f,%f", x1,x2);
					}
			}
		
	}
	return 0;
}
