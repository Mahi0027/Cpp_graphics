#include<graphics.h>
#include<iostream>
#include<conio.h>
using namespace std;

void showLeftRectangle();
void showRightRectangle();
void LButtonShow();
void RButtonShow();
int main(){
	int height = GetSystemMetrics(SM_CYSCREEN);
	int width = GetSystemMetrics(SM_CXSCREEN);
	
	initwindow(width, height,"",-3,-3);
	cleardevice();
	setcolor(9);
	rectangle(200,200,500,500);
	rectangle(1200,200,1500,500);
	POINT cursorPos;
//	rectangle(200,400,200,400);
	while(1){
//		cleardevice();
		GetCursorPos(&cursorPos);
		circle(cursorPos.x, cursorPos.y, 50);
		
		
		if(GetAsyncKeyState(VK_LBUTTON)){
			if((cursorPos.x >=200 && cursorPos.x <= 500) && (cursorPos.y >=200 && cursorPos.y <= 500)) {
				showLeftRectangle();
			}
			if((cursorPos.x >=1200 && cursorPos.x <= 1500) && (cursorPos.y >=200 && cursorPos.y <= 500)) {
				showRightRectangle();
			}
//			LButtonShow();
//			break;
		}
		if(GetAsyncKeyState(VK_RBUTTON)){
//			RButtonShow();
//			break;
		}
		delay(50);
	}
	closegraph();
	return 0;
}

void showLeftRectangle(){
	cleardevice();
	outtextxy(500,500,"Hello Left Rectangle");
	delay(1000);
}

void showRightRectangle(){
	cleardevice();
	outtextxy(500,500,"Hello Right Rectangle");
	delay(1000);
}
void LButtonShow(){
	cleardevice();
	outtextxy(100,100,"Hello Left World!");
	delay(1000);
}
void RButtonShow(){
	cleardevice();
	outtextxy(100,100,"Hello Right World!");
	delay(1000);
}
