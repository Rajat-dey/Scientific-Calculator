#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{

int a,b,c,d,e,n,r,npr,ncr,chr,base,altitude,i;
char choice;
double x,y,z,area;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");


setbkcolor(GREEN);
setcolor(RED);
settextstyle(8,0,3);
outtextxy(80,80,"Student Reference Program");
setcolor(BLUE);
outtextxy(160,150,"SCIENTIFIC CALCULATOR");

for(i=0;i<330;i=i+10)
{
setcolor(RED);
outtextxy(i+150,120,"*");     //ANIMATION
delay(80);
outtextxy(i+150,170,"*");
delay(80);
sound(5000);            //sound effect
delay(50);
nosound();
}


setcolor(BROWN);
settextstyle(7,0,3);
outtextxy(15,370,"SUBMITTED TO:-");
outtextxy(410,370,"SUBMITTED BY:-");
setcolor(LIGHTRED);
settextstyle(6,0,3);
outtextxy(20,390,"Open-Source Development");
outtextxy(435,390,"RAJAT DEY");
getch();
cleardevice();


do                                //BODY OF CALCULATOR
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TC\\BGI");

setcolor(WHITE);

setbkcolor(BROWN);
setfillstyle(SOLID_FILL, CYAN);
rectangle(10,50,630,450);    //outer boundary
bar3d(20,70,270,410,10,5);   //figure of the body
settextstyle(0,0,2);
outtextxy(190,20,"SCIENTIFIC CALCULATOR");

circle(255,90,5);               //design
circle(245,90,5);
circle(235,90,5);
setfillstyle(SOLID_FILL, LIGHTGRAY);
bar(30,100,260,150);                    //display that shows the number
setfillstyle(SOLID_FILL,BLUE);

				  //complete 20 buttons that blinks
bar(30,180,80,210);
bar(90,180,140,210);
bar(150,180,200,210);
bar(210,180,260,210);
bar(30,220,80,250);
bar(90,220,140,250);
bar(150,220,200,250);
bar(210,220,260,250);
bar(30,260,80,290);
bar(90,260,140,290);
bar(150,260,200,290);
bar(210,260,260,290);
bar(30,300,80,330);
bar(90,300,140,330);
bar(150,300,200,330);
bar(210,300,260,330);
bar(30,340,80,370);
bar(90,340,140,370);
bar(150,340,200,370);
bar(210,340,260,370);


setcolor(LIGHTGREEN);
settextstyle(6,0,1);
outtextxy(40,185,"Add");
outtextxy(100,185,"Sub");
outtextxy(160,185,"Mul");
outtextxy(225,185,"Div");
outtextxy(45,225,"%");
outtextxy(100,225,"Mod");
outtextxy(160,225,"Abs");
outtextxy(220,225,"Sqrt");
outtextxy(42,265,"Sinx");
outtextxy(100,265,"Cosx");
outtextxy(160,265,"Tanx");
outtextxy(230,265,"ln");
outtextxy(45,305,"log");
outtextxy(90,305,"10^x");
outtextxy(160,305,"x^y");
outtextxy(225,305,"e^x");
outtextxy(45,345,"Tri");
outtextxy(100,345,"nPr");
outtextxy(160,345,"nCr");
outtextxy(220,345,"Hyp");

settextstyle(2,0,4);
outtextxy(230,340,"20");
outtextxy(170,340,"19");
outtextxy(110,340,"18");
outtextxy(50,340,"17");
outtextxy(230,300,"16");
outtextxy(170,300,"15");
outtextxy(110,300,"14");
outtextxy(50,300,"13");
outtextxy(230,260,"12");
outtextxy(170,260,"11");
outtextxy(110,260,"10");
outtextxy(50,260,"9");
outtextxy(230,220,"8");
outtextxy(170,220,"7");
outtextxy(110,220,"6");
outtextxy(50,220,"5");
outtextxy(230,180,"4");
outtextxy(170,180,"3");
outtextxy(110,180,"2");
outtextxy(50,180,"1");

settextstyle(7,0,1);
setcolor(LIGHTRED);
outtextxy(30,80,"RD");     //symbol of developer
setcolor(YELLOW);
outtextxy(300,70,"Step 1:");
setcolor(BLUE);
outtextxy(300,100,"Enter your choice for your");
outtextxy(300,120,"desired operation.");
gotoxy(70,9);
flushall();
scanf("%d",&chr);

switch(chr)
{
	case 1:

	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(30,180,80,210);
	floodfill(32,182,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(40,185,"Add");
	settextstyle(2,0,4);
	outtextxy(50,180,"1");
	delay(200);
	sound(2000);            //sound effect
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(30,180,80,210);
	floodfill(32,182,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(40,185,"Add");
	settextstyle(2,0,4);
	outtextxy(50,180,"1");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the two No.");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	outtextxy(110,105,"+");
	gotoxy(18,8);
	flushall();
	scanf("%lf",&y);
	z=x+y;
	gotoxy(6,9);
	printf("= %lf",z);
	flushall();break;

	case 2:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(90,180,140,210);
	floodfill(92,182,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,185,"Sub");
	settextstyle(2,0,4);
	outtextxy(110,180,"2");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(90,180,140,210);
	floodfill(92,182,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,185,"Sub");
	settextstyle(2,0,4);
	outtextxy(110,180,"2");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the two No.");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	outtextxy(110,105,"-");
	gotoxy(18,8);
	flushall();
	scanf("%lf",&y);
	z=x-y;
	gotoxy(6,9);
	printf("= %lf",z);
	flushall();break;

	case 3:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(150,180,200,210);
	floodfill(152,182,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,185,"Mul");
	settextstyle(2,0,4);
	outtextxy(170,180,"3");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(150,180,200,210);
	floodfill(152,182,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,185,"Mul");
	settextstyle(2,0,4);
	outtextxy(170,180,"3");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the two No.");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	outtextxy(110,105,"X");
	gotoxy(18,8);
	flushall();
	scanf("%lf",&y);
	z=x*y;
	gotoxy(6,9);
	printf("= %lf",z);
	flushall();break;

	case 4:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(210,180,260,210);
	floodfill(212,182,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(225,185,"Div");
	settextstyle(2,0,4);
	outtextxy(230,180,"4");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(210,180,260,210);
	floodfill(212,182,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(225,185,"Div");
	settextstyle(2,0,4);
	outtextxy(230,180,"4");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the two No.");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	outtextxy(110,105,"/");
	gotoxy(18,8);
	flushall();
	scanf("%lf",&y);
	z=x/y;
	gotoxy(6,9);
	printf("= %lf",z);
	flushall();break;

	case 5:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(30,220,80,250);
	floodfill(32,222,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(45,225,"%");
	settextstyle(2,0,4);
	outtextxy(50,220,"5");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(30,220,80,250);
	floodfill(32,222,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(45,225,"%");
	settextstyle(2,0,4);
	outtextxy(50,220,"5");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value and total value");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	outtextxy(110,105,"/");
	gotoxy(18,8);
	flushall();
	scanf("%lf",&y);
	outtextxy(180,105,"%");
	z= x/y*100;
	gotoxy(6,9);
	printf("= %lf",z);
	flushall();break;

	case 6:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(90,220,140,250);
	floodfill(92,220,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,225,"Mod");
	settextstyle(2,0,4);
	outtextxy(110,220,"6");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(90,220,140,250);
	floodfill(92,222,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,225,"Mod");
	settextstyle(2,0,4);
	outtextxy(110,220,"6");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor (BLUE);
	outtextxy(300,180,"Enter the two No.");
	gotoxy(6,8);
	flushall();
	scanf("%d",&a);
	gotoxy(18,8);
	flushall();
	scanf("%d",&b);
	c=a%b;
	gotoxy(6,9);
	printf("= %d",c);
	flushall();break;

	case 7:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(150,220,200,250);
	floodfill(152,222,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,225,"Abs");
	settextstyle(2,0,4);
	outtextxy(170,220,"7");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(150,220,200,250);
	floodfill(152,222,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,225,"Abs");
	settextstyle(2,0,4);
	outtextxy(170,220,"7");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value.");
	gotoxy(6,8);
	scanf("%d",&a);
	gotoxy(6,9);
	printf("= %d",abs(a));
	flushall();break;

	case 8:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(210,220,260,250);
	floodfill(212,222,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(220,225,"Sqrt");
	settextstyle(2,0,4);
	outtextxy(230,220,"8");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(210,220,260,250);
	floodfill(212,222,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(220,225,"Sqrt");
	settextstyle(2,0,4);
	outtextxy(230,220,"8");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	y = sqrt(x);
	gotoxy(6,9);
	printf("= %lf",y);
	flushall();break;

	case 9:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(30,260,80,290);
	floodfill(32,262,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(42,265,"Sinx");
	settextstyle(2,0,4);
	outtextxy(50,260,"9");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(30,260,80,290);
	floodfill(32,262,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(42,265,"Sinx");
	settextstyle(2,0,4);
	outtextxy(50,260,"9");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of angle in degree");
	outtextxy(40,105,"sin");
	gotoxy(10,8);
	flushall();
	scanf("%lf",&x);
	x = x*22/(7*180);
	y = sin(x);
	gotoxy(6,9);
	printf("= %lf",y);
	flushall();break;

	case 10:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(90,260,140,290);
	floodfill(92,262,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,265,"Cosx");
	settextstyle(2,0,4);
	outtextxy(110,260,"10");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(90,260,140,290);
	floodfill(92,262,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,265,"Cosx");
	settextstyle(2,0,4);
	outtextxy(110,260,"10");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of angle in degree");
	outtextxy(40,105,"cos");
	gotoxy(10,8);
	flushall();
	scanf("%lf",&x);
	x = x*22/(7*180);
	y = cos(x);
	gotoxy(6,9);
	printf("= %lf",y);
	flushall();break;

	case 11:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(150,260,200,290);
	floodfill(152,262,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,265,"Tanx");
	settextstyle(2,0,4);
	outtextxy(170,260,"11");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(150,260,200,290);
	floodfill(152,262,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,265,"Tanx");
	settextstyle(2,0,4);
	outtextxy(170,260,"11");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of angle");
	outtextxy(300,200,"in degree.");
	outtextxy(40,105,"tan");
	gotoxy(10,8);
	flushall();
	scanf("%lf",&x);
	x = x*22/(7*180);
	y = tan(x);
	gotoxy(6,9);
	printf("= %lf",y);
	flushall();break;

	case 12:


	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(210,260,260,290);
	floodfill(212,262,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(230,265,"In");
	settextstyle(2,0,4);
	outtextxy(230,260,"12");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(210,260,260,290);
	floodfill(212,262,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(230,265,"In");
	settextstyle(2,0,4);
	outtextxy(230,260,"12");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value");
	outtextxy(40,105,"ln");
	gotoxy(10,8);
	flushall();
	scanf("%lf",&x);
	y = log(x);
	gotoxy(6,9);
	printf("= %lf",y);
	flushall();break;

	case 13:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(30,300,80,330);
	floodfill(32,302,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(45,305,"log");
	settextstyle(2,0,4);
	outtextxy(50,300,"13");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(30,300,80,330);
	floodfill(32,302,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(45,305,"log");
	settextstyle(2,0,4);
	outtextxy(50,300,"13");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value");
	outtextxy(40,105,"log");
	gotoxy(10,8);
	flushall();
	scanf("%lf",&x);
	y = log10(x);
	gotoxy(6,9);
	printf("= %lf",y);
	flushall();break;

	case 14:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(90,300,140,330);
	floodfill(92,302,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(90,305,"10^x");
	settextstyle(2,0,4);
	outtextxy(110,300,"14");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(90,300,140,330);
	floodfill(92,302,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(90,305,"10^x");
	settextstyle(2,0,4);
	outtextxy(110,300,"14");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of x");
	outtextxy(90,305,"10^x");
	gotoxy(10,8);
	flushall();
	scanf("%lf",&x);
	gotoxy(6,9);
	printf("= %lf",pow10(x));
	flushall();break;

	case 15:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(150,300,200,330);
	floodfill(152,302,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,305,"x^y");
	settextstyle(2,0,4);
	outtextxy(170,300,"15");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(150,300,200,330);
	floodfill(152,302,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,305,"x^y");
	settextstyle(2,0,4);
	outtextxy(170,300,"15");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of x,y");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	outtextxy(110,105,"^");
	gotoxy(18,8);
	flushall();
	scanf("%lf",&y);
	gotoxy(6,9);
	printf("= %lf",pow(x,y));
	flushall();break;

	case 16:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(210,300,260,330);
	floodfill(212,302,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(225,305,"e^x");
	settextstyle(2,0,4);
	outtextxy(230,300,"16");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(210,300,260,330);
	floodfill(212,302,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(225,305,"e^x");
	settextstyle(2,0,4);
	outtextxy(230,300,"16");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of x");
	outtextxy(40,105,"e^");
	gotoxy(10,8);
	flushall();
	scanf("%lf",&x);
	y = exp(x);
	gotoxy(6,9);
	printf("= %lf",y);
	flushall();break;

	case 17:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(30,340,80,370);
	floodfill(32,342,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(45,345,"Tri");
	settextstyle(2,0,4);
	outtextxy(50,340,"17");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(30,340,80,370);
	floodfill(32,342,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(45,345,"Tri");
	settextstyle(2,0,4);
	outtextxy(50,340,"17");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the base and altitude");
	gotoxy(6,8);
	flushall();
	scanf("%d",&base);
	gotoxy(25,8);
	outtextxy(150,105,"*");
	flushall();
	scanf("%d",&altitude);
	area=(base*altitude)*0.5;
	gotoxy(6,9);
	printf("=%lf",area);
	flushall();break;

	case 18:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(90,340,140,370);
	floodfill(92,342,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,345,"nPr");
	settextstyle(2,0,4);
	outtextxy(110,340,"18");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(90,340,140,370);
	floodfill(92,342,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(100,345,"nPr");
	settextstyle(2,0,4);
	outtextxy(110,340,"18");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of n and r");
	outtextxy(300,200,"respectively.");
	gotoxy(6,8);
	flushall();
	scanf("%d",&n);
	outtextxy(110,105,"P");
	gotoxy(18,8);
	flushall();
	scanf("%d",&r);
	b=1;
	for(c=1;c<=n;c++)
	  {
	   b = b * c;
	  }
	d=1;
	a=(n-r);
	for(c=1;c<=a;c++)
	   {
	   d =  d * c;
	   }
	npr = b/d;
	gotoxy(6,9);
	printf("= %d",npr);
	flushall();break;

	case 19:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(150,340,200,370);
	floodfill(152,342,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,345,"nCr");
	settextstyle(2,0,4);
	outtextxy(170,340,"19");
	delay(200);
	sound(2000);
	delay(50);
	nosound();

	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(150,340,200,370);
	floodfill(152,342,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(160,345,"nCr");
	settextstyle(2,0,4);
	outtextxy(170,340,"19");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the value of n and r");
	outtextxy(300,200,"respectively.");
	gotoxy(6,8);
	flushall();
	scanf("%d",&n);
	outtextxy(110,105,"C");
	gotoxy(18,8);
	flushall();
	scanf("%d",&r);

	b=1;
	for(c=1;c<=n;c++)
	  {
	   b = b * c;
	  }
	d=1;
	a=(n-r);
	for(c=1;c<=a;c++)
	   {
	   d =  d * c;
	   }
       e=1;
	for(c=1;c<=r;c++)
	  {
	   e = e * c;
	  }
	ncr= b/(e*d);
	gotoxy(6,9);
	printf("= %d",ncr);
	flushall();break;

	case 20:
	for(i=0;i<1;i++)
	{
	setcolor(LIGHTBLUE);
	setfillstyle(SOLID_FILL,LIGHTBLUE);
	rectangle(210,340,260,370);
	floodfill(212,342,LIGHTBLUE);
	delay(40);

	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(220,345,"Hyp");
	settextstyle(2,0,4);
	outtextxy(230,340,"20");
	delay(200);
	sound(2000);
	delay(50);
	nosound();


	setcolor(BLUE);
	setfillstyle(SOLID_FILL,BLUE);
	rectangle(210,340,260,370);
	floodfill(212,342,BLUE);
	setcolor(LIGHTGREEN);
	settextstyle(6,0,1);
	outtextxy(220,345,"Hyp");
	settextstyle(2,0,4);
	 outtextxy(230,340,"20");
	}
	settextstyle(7,0,1);
	setcolor(YELLOW);
	outtextxy(300,150,"Step 2:");
	setcolor(BLUE);
	outtextxy(300,180,"Enter the Base and Pern. values");
	gotoxy(6,8);
	flushall();
	scanf("%lf",&x);
	gotoxy(18,8);
	flushall();
	scanf("%lf",&y);

	z= hypot(x,y);
	gotoxy(6,9);
	printf("hyp=%lf",z);
	flushall();
	break;

	default:
	settextstyle(6,0,1);
	setcolor(RED);
	sound(1000);
	bar(300,167,580,200);
	outtextxy(310,170,"You have Entered a Invalid Choice");
	delay(50);
	nosound();
	flushall();
	break;

}
settextstyle(8,0,1);
setcolor(BLUE);
outtextxy(300,220,"Do you want to continue?(Y/N)");
settextstyle(7,0,1);
gotoxy(40,17);
flushall();
scanf("%s",&choice);
if(choice=='n'||choice=='N')
exit(1);
}while(choice=='y'||'Y');
flushall();
getch();
	}