#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	for(i=10;i>0;i--){
		if(i==3){
			break;
			}
				if(i==6){
			continue;
		}
		printf("\n%d", i);
		

		

	}
	
	

	return 0;
	
}


