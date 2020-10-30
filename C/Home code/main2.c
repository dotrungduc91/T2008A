#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, a2, b1, b2, c1, c2;
	float D, Dx, Dy, x, y;
	printf("Nhapgiatri a1=");
	scanf("%d", &a1);
	
	printf("Nhapgiatri a2=");
	scanf("%d", &a2);
	
	printf("Nhapgiatri b1=");
	scanf("%d", &b1);
	
	printf("Nhapgiatri b2=");
	scanf("%d", &b2);
	
	printf("Nhapgiatri c1=");
	scanf("%d", &c1);
	 
	printf("Nhapgiatri c2=");
	scanf("%d", &c2);
	
	D = a1*b2 - a2*b1;
	Dx = c1*b2 - b1*c2;
	Dy = a1*c2 - a2*c1;
	
	if(D == 0){
		if(Dx = Dy == 0){
			printf("Phuong trinh vo so nghiem");
		}
		else{
			printf(" phuong trinh vo nghiem");
		}
	
		}
	else{
		x = Dx/D;
		y = Dy/D;
		printf("phuong trinh co nghiem duy nhat x= %f, y= %f", x, y);
		}
		
	return 0;
}
