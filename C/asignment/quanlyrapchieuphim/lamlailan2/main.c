#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cinema.h"

//int a = 4;
int main(int argc, char *argv[]) {
	
	Cinema cinemaList[4];
	int choose;
	do{
		showMenu();
		
		
		printf("\nChon choose= "); scanf("%d", &choose);
		
		switch(choose){
			case 1:
				inputCinemaList(cinemaList);
				break;
			
			case 2:
				sapxep(cinemaList);
				inthongtin(cinemaList);
				break;
			
			case 3:
				timtheosoghetoithieu(cinemaList);
				break;
			
			case 4:
				savefile(cinemaList);
				break;

			case 5:
				readfile(cinemaList);
				break;

			case 6:
				printf("\nThoat chuong trinh!!!");
				break;
				
			default:
				printf("\nNhap sai du lieu !!!");
				break;
	}
		} while(choose!=6);
	

	return 0;
}
