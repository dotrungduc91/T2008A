#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void changeValue(int k) {
	k++;
	//X2
	printf("\nk = %d", k);
}

void changeValue2(int *k) {
	*k += 1;
	//X4
	printf("\nk = %d", *k);
}

int tinhtong(int t[10]) {
	int sum = 0;
	int i;
	
//	t[3] = 1000;
	
	for(i=0;i<10;i++) {
		sum += t[i];
	}
	printf("\nTong: %d", sum);
	
	return sum;
}

int tinhtong2(int *t, int n) {
	int sum = 0;
	int i;
	
//	t[3] = 1000;
	
	for(i=0;i<n;i++) {
		sum += t[i];
	}
	printf("\nTong: %d", sum);
	
	return sum;
}

int main(int argc, char *argv[]) {
	int x =5;
	int *p = &x;
	
	*p += 2;
	x++;
	
	//X1
	printf("\nX = %d", x);//x = 8
	
	changeValue(x);//k = 9
	changeValue(x);//k = 9
	//x = 8
	changeValue2(&x);
	
	//X3
	printf("\nX = %d", x);
	
	int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
	int s = tinhtong(&t[0]);
	
	int s1 = tinhtong2(t,10);
	printf("\nt[3] = %d", t[3]);
	
	return 0;
}
