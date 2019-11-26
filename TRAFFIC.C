#include<stdio.h>
#include<graphics.h>
#include<conio.h>
int main(void)
{       int gd=0,gm;
	int rx1=100,rx2=550,ry1=190,ry2=290;
	int cx1=175, cy1=240, cx2=325, cy2=cy1, cx3=475, cy3=cy1, rad=40;
	char ch;
	initgraph(&gd,&gm,"C://TURBOC3/BGI");
	setbkcolor(BLUE); //Background
	//Rectangle 1
	setcolor(10);
	setfillstyle(1,10);
	rectangle(rx1,ry1,rx2,ry2);
	floodfill(rx1+1,ry1+1,10);
	//Circles
	setcolor(RED);
	circle(cx1,cy1,rad); //1
	setcolor(YELLOW);
	circle(cx2,cy2,rad); //2
	setcolor(GREEN);
	circle(cx3,cy3,rad); //3
	while(1)
	{
		ch = getch();
		if(ch=='1')
		{
			setcolor(RED);
			setfillstyle(1,RED);
			circle(cx1,cy1,rad);
			floodfill(cx1,cy1,RED);
		}
		else if(ch=='2')
		{
			setcolor(YELLOW);
			setfillstyle(1,YELLOW);
			circle(cx2,cy2,rad);
			floodfill(cx2,cy2,YELLOW);
		}
		else if(ch=='3')
		{
			setcolor(GREEN);
			setfillstyle(1,GREEN);
			circle(cx3,cy3,rad);
			floodfill(cx3,cy3,GREEN);
		}
		else if(ch==32)
		{
			//system("cls");
			/*
			setcolor(10);
			setfillstyle(1,10);
			rectangle(rx1,ry1,rx2,ry2);
			floodfill(rx1+1,ry1+1,10);*/
			setcolor(10);
			setfillstyle(1,10);
			circle(cx1,cy1,rad); //1
			floodfill(cx1,cy1,10);
			setcolor(10);
			setfillstyle(1,10);
			circle(cx2,cy2,rad); //2
			floodfill(cx2,cy2,10);
			setcolor(10);
			setfillstyle(1,10);
			circle(cx3,cy3,rad);
			floodfill(cx3,cy3,10);

			//Circles
			setcolor(RED);
			circle(cx1,cy1,rad); //1
			setcolor(YELLOW);
			circle(cx2,cy2,rad); //2
			setcolor(GREEN);
			circle(cx3,cy3,rad); //3



		}
	       /*	else if(ch==4)
		{
			setcolor(YELLOW);
			setfillstyle(1,YELLOW);
			circle(cx1,cy1,rad);
			floodfill(cx1,cy1,YELLOW);
		}*/
		else if(ch==27)
		{
		  exit(1);
		}
	}
	getch();
	closegraph();
	return 0;
}