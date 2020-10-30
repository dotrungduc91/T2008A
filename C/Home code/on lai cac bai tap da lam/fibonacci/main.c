#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int fn,f0,f1,max;
	printf("Nhap max: "), scanf("%d", &max);
	
	f0=1;
	f1=1;
	
	printf("1 1");
	fn = f0 + f1;
	while(fn<max){
		printf(" %d ", fn);
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}

	return 0;
}
