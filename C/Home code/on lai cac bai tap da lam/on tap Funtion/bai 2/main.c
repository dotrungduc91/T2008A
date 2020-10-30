#include <stdio.h>
#include <stdlib.h>

void Show (int msg){
	printf("\nHello %d", msg);
}


int main(int argc, char *argv[]) {
	
	
	Show(1);
	Show(2);
	Show(3);
	
	return 0;
}
