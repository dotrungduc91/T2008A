#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//Xu ly file
	//Mo ket noi File
	FILE *fp = fopen("vidu.txt", "a");
	
	//Ghi du lieu
//	fprintf(fp, "Sinh vien Aptech\n");
//	fputc('A', fp);
	
	//Dong ket noi
	fclose(fp);
	
	//Mo ket noi File
	fp = fopen("vidu.txt", "r");
	
	//Ghi du lieu
	char str[100];
	fgets(str, 100, fp);
	printf("\nstr: %s", str);
	
	//Dong ket noi
	fclose(fp);
	//Ket thuc xu ly file
	
	return 0;
}
