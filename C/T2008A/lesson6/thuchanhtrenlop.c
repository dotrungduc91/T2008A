//#include <stdio.h>
//#include <stdlib.h>
//
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//	
//int main(int argc, char *argv[]) {
//	
//void Showinfor() {
//	char name[50];
//	int age;
//	char address[50];
//	char email[50];
//	int number;
//		
//		fflush(stdin); fflush(stdout);
//		printf("\nNhap ten:"); gets(name);
//		
//		fflush(stdin); fflush(stdout);
//		printf("\nNhap tuoi:"); scanf("%d", &age);
//		
//		fflush(stdin); fflush(stdout);
//		printf("\nNhap dia chi:"); gets(address);
//		
//		fflush(stdin); fflush(stdout);
//		printf("\nNhap email:"); gets(email);
//		
//		fflush(stdin); fflush(stdout);
//		printf("\nNhap SDT:"); scanf("%d", &number);	
//		
//		printf("\n|%s|%d|%s|%s|%d|", name, age, address, email, number );
//	}
//	Showinfor();
//	
//	Showinfor();
//	
//	return 0;
//}



#include <stdio.h>
#include <stdlib.h>

void ShowInfor(){
	printf ("\n1.Ten: Do Trung Duc\n2.Tuoi: 29\n3.Dia chi: Ha Noi\n4.Email:trungducchk50@gmail.com\n5.Phone: 0985246267");
}
	
int main(int argc, char *argv[]) {
	
	ShowInfor();
	
}
