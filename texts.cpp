#include<graphics.h>
#include<conio.h>
int main()
{
	int d,m,co;
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,NULL);
	
	int height = GetSystemMetrics(SM_CYSCREEN);
	int width = GetSystemMetrics(SM_CXSCREEN);
	
	initwindow(width, height,"",-3,-3);
	cleardevice();
	for(co=0; co<=15; co++)
	{
		setbkcolor(co);
		setcolor(co+1);
		settextstyle(0,0,2);
		outtextxy(100,10+co*20, "Programming digest");
		outtextxy(200, 200,"press any key….");
		getch();
	}
//	getch();
	closegraph();
	return 0;
}
