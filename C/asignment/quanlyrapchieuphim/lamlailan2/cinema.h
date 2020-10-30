typedef struct Cinema{
	char name[25], address[35];
	int seats;
} Cinema;

void showMenu();

void inputCinemaList(Cinema *p);

void sapxep(Cinema *p);

void inthongtin(Cinema *p);

void timtheosoghetoithieu(Cinema *p);

void savefile(Cinema *p);

void readfile(Cinema *p);
