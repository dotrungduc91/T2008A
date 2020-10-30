#include <stdio.h>
#include <stdlib.h>


int giaithua(int n){
	int giaithua, i;
	giaithua = 1;
	for(i=1;i<=n;i++){
		giaithua = giaithua * i;	
	}
		printf("\ngiai thua cua %d = %d", n, giaithua);
	return giaithua;
}

int tong(int m){
	int tong, i;
	tong = 0;
	for(i=1;i<=m;i++){
		tong = tong + i;	
	}	
		printf("\ntong cua 1 - %d = %d", m, tong);
	return tong;
}

int main(int argc, char *argv[]) {
	int n;
	printf("\nNhap n= "), scanf("%d", &n);
	
	int m;
	printf("\nNhap m= "), scanf("%d", &m);
	
	int G=giaithua(n), T=tong(m);
	
	if(G>=T){
		printf("\nGiai thua cua %d >= Tong tu 1 - %d", n, m);
		
	}else{
		
		printf("\nGiai thua cua %d < Tong tu 1 - %d", n, m);
	}
	
	
		return 0;
	
}
