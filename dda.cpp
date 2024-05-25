#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
float round(float a)
{
int b=a+0.5;
return b;
}
int main()
{
int x,y,x1,y1,x2,y2,p,dx,dy,m;
int gd=DETECT,gm;
initgraph(&gd,&gm,(char*)"");
printf("\nEnter the x-coordinate of the first point ::");
scanf("%d",&x1);
printf("\nEnter the y-coordinate of the first point ::");
scanf("%d",&y1);
printf("\nEnter the x-coordinate of the second point ::");
scanf("%d",&x2);
printf("\nEnter the y-coordinate of the second point ::");
scanf("%d",&y2);
x=x1;
y=y1;
dx=x2-x1;
dy=y2-y1;
m=dy/dx;
if(m<<0)
{
	m=m*(-1);
}
while(x<=x2 && y<=y2)
{	
if(m<=1)
{
	x=x+1;
	y=y+m;
	putpixel(round(x),round(y),WHITE);
}
else
{
	y=y+1;
	x=x+(1/m);
	putpixel(round(x),round(y),WHITE);
	
}
}
outtextxy(200,20,"DDA"); 
outtextxy(x,y,"(x1,y1)");
outtextxy(x,y,"(x2,y2)");
getch();
closegraph();
}


