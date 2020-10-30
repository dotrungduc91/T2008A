#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
///Bai 2
int main(int argc, char *argv[]) {
	
	int i, n,  S;
	
	printf("Nhap gia tri n =");
	scanf("%d", &n);
	
	S = 0;
	
	for(i = 2;i<=n; i++){
		if(i % 2 == 0 && i % 3 != 0){
			S = S + i; 
		}
		
	}
	printf("Tong S = %d", S);
	
	return 0;
}
