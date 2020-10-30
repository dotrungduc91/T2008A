#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ngay,thang, nam;
	printf("\nnhapngay");
	scanf("%d", &ngay);
	
	printf("\nnhapthang");
	scanf("%d", &thang);
	
	printf("\nnhapnam");
	scanf("%d", &nam);
	
	
	printf("\n%d/%d/%d", ngay, thang, nam);
	return 0;
}
