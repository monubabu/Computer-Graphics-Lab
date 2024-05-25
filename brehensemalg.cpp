#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>

int main() {
    int x, y, x1, y1, x2, y2, p, dx, dy;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    printf("Enter the x-coordinate for the first point: ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate for the first point: ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate for the second point: ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate for the second point: ");
    scanf("%d", &y2);

    x = x1;
    y = y1;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    int sx = (x2 > x1) ? 1 : -1;
    int sy = (y2 > y1) ? 1 : -1;
    int m = (dx > dy) ? dx : dy;

    putpixel(x, y, WHITE);

    if (dx > dy) {
        p = 2 * dy - dx;
        for (int i = 0; i <= dx; ++i) {
            x += sx;
            if (p < 0) {
                p += 2 * dy;
            } else {
                y += sy;
                p += 2 * (dy - dx);
            }
            putpixel(x, y, WHITE);
        }
    } else {
        p = 2 * dx - dy;
        for (int i = 0; i <= dy; ++i) {
            y += sy;
            if (p < 0) {
                p += 2 * dx;
            } else {
                x += sx;
                p += 2 * (dx - dy);
            }
            putpixel(x, y, WHITE);
        }
    }

    getch();
    closegraph();
    return 0;
}

