#include<iostream>
#include<graphics.h>
#include<math.h>
#include<windows.h>
using namespace std;
int main(){
    int x,y,x1,y1,x2,y2,dx,dy,steps;
    int i,gd=DETECT,gm;
 	initgraph(&gd,&gm,"c:\\MinGw\\bgi");
    cout<<"Enter the x1, y1 coordinates: ";
    cin>>x1>>y1;
    cout<<"Enter the x2, y2 coordinates: ";
    cin>>x2>>y2;
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    dx>dy ? steps=dx : steps=dy;
    x=x1;
	y=y1;
	i=1;
	while(i<=step){
		putpixel(x,y,5);
		x=x+dx;
		y=y+dy;
		i=i+1;
		delay(100);
	}
	closegraph();
    return 0;
}