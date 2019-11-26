#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=0,gm;//graphics driver and graphics mode
	initgraph(&gd,&gm,"C://TURBOC3/BGI");//path for gd and gm
	setbkcolor(BLACK);
	setfillstyle(2,RED);
	circle(250,200,50);
	floodfill(250,200,WHITE);
	getch();
	closegraph();
}