
//Tính S(n) = 1 + 2 + 3 + … + n bang vong for
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char *argv[]) {
//	
//float S,n, a;
//
//printf("nhap gia tri cho n="); scanf ("%f", &n);
//S=0;
//	
//for(a=1;a<=n;a++){
//	S = S + a;
//}
//	printf("\nTong S = %f", S);
//
//	return 0;
//}

//Tính S(n) = 1 + 2 + 3 + … + n bang vong while
//#include <stdio.h>
//#include <stdlib.h>
//int main(int argc, char *argv[]) {
//	
//float S,n, a;
//
//printf("nhap gia tri cho n="); scanf ("%f", &n);
//S=0;
//a=1;	
//while(a<=n){
//	S = S + a;
//	a++;
//}
//	printf("\nTong S = %f", S);
//
//	return 0;
//}

//Tính S(n) = 1 + 2 + 3 + … + n bang vong while
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	
float S,n, a;

printf("nhap gia tri cho n="); scanf ("%f", &n);
S=0;
a=1;	
do{
	S = S + a;
	a++;
} while(a<=n);
	printf("\nTong S = %f", S);

	return 0;
}


