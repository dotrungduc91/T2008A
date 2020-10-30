
int main(int argc, char *argv[]) {
	
char rollno[16];
int age;
char name[50];
char address[200];

	fflush(stdin); fflush(stdout);
	printf("\nnhap ten sinh vien "); gets(name);
	
	printf("\nnhap tuoi sinh vien"); scanf("%d", &age);
	
	fflush(stdin); fflush(stdout);
	printf("\nnhap ma sinh vien"); gets(rollno);
	
	fflush(stdin); fflush(stdout);
	printf("\nnhap dia chi sinh vien"); gets(address);
	
printf("\n=============================");	
printf("\n |Ten|Tuoi|Ma SV|Dia chi");
printf("\n=============================");
printf("\n |%s|%d|%s|%s", name, age, rollno, address);
printf("\n==============================");

	return 0;
}
