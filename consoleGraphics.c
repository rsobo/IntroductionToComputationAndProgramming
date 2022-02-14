#include "consoleGraphics.h"
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <stdbool.h>

void setColor(int f, int b,int FGI, int BGI )
{
	int color = 0;
	color = f| (b<<4);
	if(FGI)
	{
		color = color | FOREGROUND_INTENSITY;
	}
	if(BGI)
	{
		color = color |BACKGROUND_INTENSITY;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void moveCursor(int x, int y)
{
	COORD testc;
	testc.X =x;
	testc.Y=y;
	if(!SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),testc))
	{
		printf("\nFailed to set cursor position!");
	}
}
void drawRect(int x1, int y1, int x2, int y2)
{
		int width = x2 -x1;
	int height = y2-y1;
	int i =0;
	int j =0;
	for(i =0; i < height; i ++)
	{
		moveCursor(x1,y1+i);
		for(j =0; j < width; j ++)
		{
			printf(" ");
		}
	}
}
