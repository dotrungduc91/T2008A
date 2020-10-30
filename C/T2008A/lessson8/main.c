#include <stdio.h>
#include <stdlib.h>


typedef struct hinhchunhat {
	float width,height,dientich;
	
}hinhchunhat;


int main(int argc, char *argv[]) {
	int i;
	float a,S[i], tongS;
	hinhchunhat t[5];
	
	for(i=0;i<5;i++){
		printf("Nhap chieu rong t[%d]= ",i); scanf("%f", &t[i].width);
		printf("Nhap chieu dai t[%d]= ",i); scanf("%f", &t[i].height);
}

for(i=0;i<5;i++){
		S[i] = t[i].width * t[i].height;
		printf ("\nDien tich S[%d] = %f", i, S[i]);
	}
	
	
	tongS =0;
	for(i=0;i<5;i++){
		tongS = tongS + S[i];
		
	}
	printf ("\nTong Dien tich tong S = %f", tongS);
	

	return 0;
}
