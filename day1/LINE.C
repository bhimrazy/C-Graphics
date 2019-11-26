#include<graphics.h>
#include<conio.h>
void main()
{
	int gd=0,gm;//graphics driver and graphics mode
	initgraph(&gd,&gm,"C://TURBOC3/BGI");//path for gd and gm
	setbkcolor(BLACK);//backgroundcolor
	setcolor(RED);//linecolor
       line(300,100,200,200);//(x1-cord,y1-cord,x2-cord,y2-cord);
	line(300,100,400,200);//(x1-cord,y1-cord,x2-cord,y2-cord);
	line(200,200,400,200);//(x1-cord,y1-cord,x2-cord,y2-cord);stline
	getch();
	closegraph();//closes the graphics mode
}