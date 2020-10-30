#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a1,a2,b1,b2,c1,c2,x,y,D,Dx,Dy;
	
	printf("Nhap he so a1=");
	scanf("%f", &a1);
	
	printf("Nhap he so b1=");
	scanf("%f", &b1);
	
	printf("Nhap he so c1=");
	scanf("%f", &c1);
	
	printf("Nhap he so a2=");
	scanf("%f", &a2);
	
	printf("Nhap he so b2=");
	scanf("%f", &b2);
	
	printf("Nhap he so c2=");
	scanf("%f", &c2);
	
	D = a1*b2-a2*b1;
	Dx = c1*b2 -c2*b1;
	Dy = a1*c2 - a2*c1;
	
	if(D==0){
		if(Dx==Dy){
			printf("phuong trinh vo so nghiem");
		}else{
			printf("phuong trinh vo nghiem");
		}
	}else{
		x = Dx/D;
		y = Dy/D;
		printf("phuong trinh co nghiem x,y = %f,%f", x,y);
	}
	return 0;
	
}
