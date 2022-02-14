#include <stdio.h>
#include <stdlib.h>
#include "consoleGraphics.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]){
	int carP = 0;
	while(carP<80){
		setColor(BLACK,BLACK,0,0);
		drawRect(0,0,80,10);
		//Draw the car
		setColor(WHITE,BLUE,0,1);
		moveCursor(carP+1,1);
		printf("  #");
		moveCursor(carP,2);
		printf("     ");
		setColor(WHITE,BLACK,1,0);
		moveCursor(carP,3);
		printf(" O  O");
		//Ask the user to continue.	
		moveCursor(0,8);
		char junk;
		scanf("%c",&junk);	
		carP ++;
	}
	
}
