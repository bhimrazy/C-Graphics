#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int gd=0,gm;
	int x=150,y=325,r=10;
	int x1=639,y1,x2=664,y2=338;
	int randnum;

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

	srand(time(NULL));
	randnum=random(150);
	y1=y2-randnum;
	while(1)
	{
		delay(10);
		//for keyboard input
		if(kbhit())
		{
			ch=getch();
			if(ch==27)
			{
				closegraph();
				exit(1);
			}
			else if(ch==32)
			{
				setfillstyle(1,BLACK);
				floodfill(x,y,BLACK);
				y-=100;
				if(y-r<=103)
					{
					y=113;
					}

			}

		}
		setcolor(7);
		rectangle(x1,y1,x2,y2);
		setcolor(BLACK);
		line(x2,y1,x2,y2);
		x1=x1-1;
		x2=x2-1;

		if(x2<0){

			x1=639;
			x2=664;
			randnum=random(150);
			y1=y2-randnum;
		}

		//for moving ball downward if ball is not in ground
		if(y+r<337){
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