//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
////BAi 1: TINH GIAI THUA
//int main(int argc, char *argv[]) {
//	
//	int giaithua, a , i;
//	
//	printf("nhap gia tri giai thua");
//	scanf("%d", &a);
//	
//	giaithua = 1;
//
//	for(i=1; i<=a; i++){
//		
//		giaithua = giaithua * i;
//	}
//	printf("gia tri giai thua = %d", giaithua);
//	
//
//	
//	return 0;
//}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//BAi 1: TINH GIAI THUA
int main(int argc, char *argv[]) {
	
	int a, n, i;
	
	a = 1;
    n = 1;
	
	printf("Nhap gia tri giai thua");
	scanf("%d", &a);
	
	if(a==0){
		printf("n! = 1");
	} else{
		for(i=1; i<=a; i++){
			n = n*i;
			
		}
		printf ("\ngiai thua = %d", n);
	}
	
	
	return 0;
}
