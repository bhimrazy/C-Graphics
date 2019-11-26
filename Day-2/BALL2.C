#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int gd=0,gm;
	int x=150,y=325,r=10,ox=639,oy=338,randnum,gameover=0;

	char ch;
	initgraph(&gd,&gm,"C://TURBOC3//BGI");

	//for drawing static layout
	setbkcolor(BLACK);
	setcolor(BROWN);
	setfillstyle(1,BROWN);
	rectangle(0,0,639,100);
	rectangle(0,339,639,439);
	floodfill(1,340,BROWN);
	floodfill(1,1,BROWN);


	//for position of initial obstable
	srand((unsigned)time(NULL));
	randnum=random(100)+40;
	oy=338-randnum;
	while(1)
	{
		//for keyboard input
		if(kbhit())
		{
			ch=getch();
			if(ch==27)
			{
				closegraph();
				exit(1);
			}
			else if(ch==32 && gameover==0)
			{
				setfillstyle(1,BLACK);
				floodfill(x,y,BLACK);
				y-=100;
				if(y<=113)
					{
					y=113;
					}

			}
		}

		delay(10);

		//for obstacle
		setcolor(7);
		line(ox,oy,ox,337);
		setcolor(BLACK);
		line(ox+25,oy,ox+25,337);
		if(gameover==0){
			ox-=1;
		}
		if(ox==-26)
		{
			ox=639;
			randnum=random(140);
			oy=338-randnum;
		}


		//for moving ball downward if ball is not in ground
		if(y<327 && gameover==0){
			setfillstyle(1,BLACK);
			floodfill(x,y,BLACK);
			y++;
			}
		//for drawing ball
		setcolor(RED);
		circle(x,y,r);
		setfillstyle(1,RED);
		floodfill(x,y,RED);
	}

}