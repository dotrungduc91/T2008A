#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int *p, S, i;
	p = (int*) calloc (10 , sizeof(int));
	S = 0;
	for(i=0;i<10;i++){
		printf("Nhap phan tu p[%d] = ", i);
		scanf("%d", &p[i]);
	
	}

	for(i=0;i<10;i++){
	if(p[i] % 2 ==0){
		S = S + p[i];
	}
	}
	printf("Tong cac so chia het cho 2 trong mang p la S = %d ", S);
	
	
	return 0;
}
