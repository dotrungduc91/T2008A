/* B�i 1 : Nh?p v�o chu?i -> in ra d? d?i c?a chu?i d� 
 #include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char a[50];
	printf("Nhap chuoi:  "), gets(a);
	
	int len;
	len = strlen(a);
	
	printf("Do dai chuoi = %d", len);
	
	return 0;
} */

//B�i 2 : Nhap vao 2 chuoi s1, s2 => noi chuoi s2 vao s1 => in ra chuoi s1
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[]) {
	
//	char S2[40], S1[50];
//	printf("Nhap chuoi S1:  "), gets(S1);
//	printf("Nhap chuoi S2:  "), gets(S2);
//	
//	strcat(S1,S2);
//	
//	printf("Do dai chuoi S1: %s", S1);
//	
//	return 0;
//}

//Bai 3: Nh?p v�o chu?i str -> in ra m�n h�nh m?i k� t? trong chu?i tr�n 1 d�ng

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	char str[40];
	printf("Nhap chuoi str:  "); gets(str);
	
	for(i=0; i<strlen(str); i++){
		printf("\n%c", str[i]);
	}
	
	return 0;
}



