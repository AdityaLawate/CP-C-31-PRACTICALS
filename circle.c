#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm = 1;
    int x, y, radius = 80;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");
    x = getmaxx() / 2;
    y = getmaxy() / 2;
    outtextxy(x - 100, 50, "CIRCLE Using Graphics library in C");
    circle(x, y, radius);
    closegraph();
    return 0;
}