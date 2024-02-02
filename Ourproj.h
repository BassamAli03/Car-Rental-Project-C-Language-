


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<fcntl.h>
#include<unistd.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void CAR(){
	const char *txt = "WELCOME TO CAR  RENTAL";
	
int x = 39;
int c = 22;
	for(int j=0;j<x-1;j++){
		gotoxy(x-j,10);
		printf("*");
		gotoxy(x+j,10);
		printf("*");
		usleep(25000);
	}

	for(int i = 0;i<9;i++){
		for(int j=0;j<x-1;j++){
			gotoxy(x-j,9-i);
			printf("*");
			gotoxy(x+j,9-i);
			printf("*");
			gotoxy(x-j,9+i);
			printf("*");
			gotoxy(x+j,9+i);
			printf("*");
		}
		usleep(30000);
		for(int k=0;k<x-1;k++){
			gotoxy(x-k,9-i);
			printf(" ");
			gotoxy(x+k,9-i);
			printf(" ");
			gotoxy(x-k,9+i);
			printf(" ");
			gotoxy(x+k,9+i);
			printf(" ");
			}	
		
	}		
		for(int l=0;l<x;l++){
		gotoxy(x-l,1);
		printf("*");
		gotoxy(x+l,1);
		printf("*");
		gotoxy(x-l,17);
		printf("*");
		gotoxy(x+l,17);
		printf("*");
		}

for(int j=0;j<9;j++){
		gotoxy(x,10-j);
		printf("*");
		gotoxy(x,10+j-1);
		printf("*");
		usleep(25000);
	}

for(int i = 0;i<x-1;i++){
		for(int j=0;j<8;j++){
			gotoxy(x-i,9-j);
			printf("*");
			gotoxy(x+i,9-j);
			printf("*");
			gotoxy(x-i,9+j);
			printf("*");
			gotoxy(x+i,9+j);
			printf("*");
		}
		usleep(25000);
		for(int k=0;k<8;k++){
			gotoxy(x-i,9-k);
			printf(" ");
			gotoxy(39-i,8);
			printf("%c",txt[15-i]);
			gotoxy(x+i,9-k);
			printf(" ");
			gotoxy(x-i,9+k);
			printf(" ");
			if(i <8){
			gotoxy(38+i,8);
			printf("%c",txt[15+i]);}
			gotoxy(x+i,9+k);
			printf(" ");
			}	
	}		

	for(int l=0;l<9;l++){
		gotoxy(1,9-l);
		printf("*");
		gotoxy(77,9-l);
		printf("*");
		gotoxy(1,9+l);
		printf("*");
		gotoxy(77,9+l);
		printf("*");
		}

gotoxy(0,19);

 printf("PRESS ANY KEY TO CONTINUE ...");
 getch();
}

