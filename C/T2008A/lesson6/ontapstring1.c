//Bài 1 : Nh?p vào chu?i -> in ra d? d?i c?a chu?i dó 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char s[50]; 
	printf("Nhap chuoi s: ");
	gets(s);
	
	int len=strlen(s);
	printf("Do dai chuoi s la: %d", len);
	
	return 0;
}


//Bài 2 : Nhap vao 2 chuoi s1, s2 => noi chuoi s2 vao s1 => in ra chuoi s1

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char s1[50], s2[50];
	
	printf("\nNhap chuoi s1: "); gets(s1);
	printf("\nNhap chuoi s2: "); gets(s2);
	
	strcat(s1,s2);
	puts(s1);
	return 0;
}

//Bài 3 : Nh?p vào chu?i str -> in ra màn hình m?i ký t? trong chu?i trên 1 dòng


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char str[100];
	printf("Nhap chuoi str: "); gets(str);
	
	int i=0;
	
	for (i=0;i<strlen(str);i++){
		printf("\n%c", str[i]);
	}
	
	return 0;
}


