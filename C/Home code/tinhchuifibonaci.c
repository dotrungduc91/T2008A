#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i,a, b, S, N;
	printf("Nhap N =:"), scanf("%d", &N);
	i = 0;
	a = 1;
	b = 1;
	printf("1 1");
	while(1){
		S = a + b;
		if(S>N){
			break;
		}
		if(S % 2 == 0){
			i = S + i;
		}
		printf(" %d ", S);
		a = b;
		b = S;
	}
	printf("\nTong cac so Fibonaci trong day chia het cho 2  = %d", i);

		return 0;
	}	
	
	

