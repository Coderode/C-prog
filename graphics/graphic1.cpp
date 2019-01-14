#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    setcolor(3);
    circle(200,100,80);
    setcolor(4);
    rectangle(300,20,500,150);
    setcolor(5);
    line(20,40,100,100);
    line(20,40,10,100);
    line(10,100,100,100);
    setcolor(6);
    ellipse(250,300,0,360,200,100);
    getch();
    closegraph();
}
