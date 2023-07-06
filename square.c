#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <graphics.h>

int abs(int n) { return ((n > 0) ? n : (n * (-1))); }

void DDA(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    int steps = (abs(dx) > abs(dy)) ? abs(dx) : abs(dy);

    float Xinc = dx / (float)steps;
    float Yinc = dy / (float)steps;

    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(X), round(Y), RED);
        X += Xinc;
        Y += Yinc;
        delay(100);
    }
}

void square(int x, int y, int x1, int y1)
{
    DDA(x, y, x1, y);
    DDA(x1, y, x1, y1);
    DDA(x1, y1, x, y1);
    DDA(x, y1, x, y);
}
main()
{
    int gd = DETECT, gm = 1;
    initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

    square(x1, y1, x2, y2);
    getch();
}