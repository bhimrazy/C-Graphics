#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=0,gm;//graphics driver and graphics mode
	initgraph(&gd,&gm,"C://TURBOC3/BGI");//path for gd and gm
	setbkcolor(BLACK);
	setcolor(RED);
	setfillstyle(1,RED);//style color
	rectangle(90,40,500,85);//(x1-cord,y1-cord,x3-cord,y3-cord);
	floodfill(92,42,RED);//seedpoint border
        getch();
        closegraph();
}