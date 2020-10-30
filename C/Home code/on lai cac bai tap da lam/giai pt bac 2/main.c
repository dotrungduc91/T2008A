#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// giai pt ax2 + bx + c = 0
int main(int argc, char *argv[]) {
	float a,b,c,z,delta,x,x1,x2;

	
	printf("Nhap a ="); scanf("%f", &a);
	printf("Nhap b ="); scanf("%f", &b);
	printf("Nhap c ="); scanf("%f", &c);

	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh vo so nghiem");
				
				
			}else{
				printf("phuong trinh vo so nghiem");
			}
			
		}else{
			x = -b/a;
			printf("phuong trinh co nghiem x = %f", x);	
		}		
		
	}else{
		delta = b*b - 4*a*c;
		printf("\ngia tri delta = %f", delta);
		
		if(delta<0){
			printf("phuong trinh vo nghiem");
		} else if(delta == 0){
			x = -b/(2*a);
			printf("phuong trinh co nghiem x = %f", x);
		} else{
			x1 = (-b - sqrt(delta) )/ (2*a);
			x2 = (-b + sqrt(delta) )/ (2*a);
			printf("phuong trinh co 2 nghiem x1, x2 = %f, %f", x1, x2);
		}
			
	}
	
	return 0;
}
