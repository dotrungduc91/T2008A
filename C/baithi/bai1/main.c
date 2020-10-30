//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//
//
//
//
//
//int main(int argc, char *argv[]) {
//	
//int n;
//    printf("\nNhap n = ");
//    scanf("%d", &n);
//    if(n < 2){
//        printf("\n%d khong phai so nguyen to", n);
////        return 0;
//    }
//    int count = 0;
//    int i;
//    for(i = 2; i <= sqrt(n); i++){
//        if(n % i == 0){
//            count++;
//        }
//    }
//    if(count == 0){
//        printf("\n%d la so nguyen to", n);
//    }else{
//        printf("\n%d khong phai so nguyen to", n);
//    }
//
//	
//	
//	return 0;
//}






#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int kiemtra(int n){
	int i ,count=0;
	if(n<2){
		return 0;
	}
		for(i = 2; i<= sqrt(n); i++){
			if(n % i == 0){
				count++;
			}			
		}
		if(count == 0){
			return 1;
		}else{
			return 0;
		}
		
}

int main(int argc, char *argv[]) {
	
	int n;
	printf("Nhap so can kiem tra n = ");
	scanf("%d",&n);
	int k = kiemtra(n);
	printf("%d",k);
	
//	return 0;
}




