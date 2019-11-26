#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=0,gm;//graphics driver and graphics mode
	initgraph(&gd,&gm,"C://TURBOC3/BGI");//path for gd and gm
	setbkcolor(BLACK);
	setcolor(YELLOW);
	settextstyle(2,0,25);//font direction size
	outtextxy(245,210,"READY");//(x coordinate,y coordinate,text)
	getch();
	closegraph();
}