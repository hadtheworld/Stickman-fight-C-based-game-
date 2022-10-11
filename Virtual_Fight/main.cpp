#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream>
#include<fstream>
#include<windows.h>
#include "register.h"  // selfe declared header file  have- Register() , login()
#include "GAMECODE.h"  // self declared header file  have- Gamecode()
using namespace std;

int main()
{ char *ch;int sc;
setfillstyle(SOLID_FILL,2);
bar(0,370,getmaxx(),getmaxy());
setfillstyle(SOLID_FILL,6);
bar(0,390,getmaxx(),getmaxy());

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");        // initialises graphic window
     POINT getcoursor;

    int X;

    circle(getmaxx()/2, getmaxy()/2, 100);     // below for loop code is for the animation of moving stick figure
    for(X=0;X<((getmaxx()/2)-50);)             //below 5 line of code is for background 
    {   setfillstyle(SOLID_FILL,2);              
bar(0,370,getmaxx(),getmaxy());
setfillstyle(SOLID_FILL,6);
bar(0,390,getmaxx(),getmaxy());
         circle(getmaxx()/2, getmaxy()/2, 100);
     X+=10;                                           // these 6 lines of code blow is the code for stick figure
    circle(50+(X),310,10);                              
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345);
    delay(100);
    cleardevice();                              // this function clears the device to get blanck screen
    X+=7;
     setfillstyle(SOLID_FILL,2);                  // above background and stick figure code is repeated here
bar(0,370,getmaxx(),getmaxy());
setfillstyle(SOLID_FILL,6);
bar(0,390,getmaxx(),getmaxy());

        circle(getmaxx()/2, getmaxy()/2, 100);
   circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,50+(X),370);
    line(50+(X),345,50+(X),370);
    line(50+(X),325,50+(X),345);
    line(50+(X),325,50+(X),345);
    delay(100);
     delay(100);
    cleardevice();
    }
             circle(getmaxx()/2, getmaxy()/2, 100);     // above background and stick figure code is repeated here

    circle(50+X,310,10);                            //this stick figure will have eyes and mouth
    circle(45+X,307,2);
    circle(55+X,307,2);
    arc(50+X,310,210,330,5);
    line(50+X,320,50+X,345);
    line(50+X,345,40+X,370);
    line(50+X,345,60+X,370);
    line(50+X,325,40+X,345);
    line(50+X,325,60+X,305);

    setcolor(YELLOW);
    settextstyle(4,HORIZ_DIR,2);

    setfillstyle(SOLID_FILL,2);
bar(0,370,getmaxx(),getmaxy());
setfillstyle(SOLID_FILL,6);
bar(0,390,getmaxx(),getmaxy());
    outtextxy((getmaxx()/2)-70,(getmaxy()/2),"hi gamers\b\b");
    while(1)
    {DEF:
    if(GetAsyncKeyState(VK_LBUTTON))
    {cleardevice();setcolor(7);                                                
     rectangle(getmaxx()/2-100,getmaxy()/2-100,getmaxx()/2+100,getmaxy()/2+100);
    line(getmaxx()/2-100,getmaxy()/2,getmaxx()/2+100,getmaxy()/2);

    circle(50+X,310,10);
    circle(45+X,307,2);
    circle(55+X,307,2);
    arc(50+X,310,210,330,5);
    line(50+X,320,50+X,345);
    line(50+X,345,40+X,370);
    line(50+X,345,60+X,370);
    line(50+X,325,40+X,345);
    line(50+X,325,60+X,305);

    setcolor(2);                                                               //displays register and play option
    outtextxy(getmaxx()/2-textwidth("Register")/2,getmaxy()/2-50,"Register");

    outtextxy(getmaxx()/2-textwidth("PLAY")/2,getmaxy()/2+30,"PLAY");

  setfillstyle(SOLID_FILL,2);
bar(0,370,getmaxx(),getmaxy());
setfillstyle(SOLID_FILL,6);
bar(0,390,getmaxx(),getmaxy());
delay(100);
    GetCursorPos(&getcoursor);

if(getcoursor.x>getmaxx()/2-textwidth("FREE PLAY")/2&&getcoursor.x<getmaxx()/2+textwidth("FREE PLAY")/2&&getcoursor.y>getmaxy()/2-70&&getcoursor.y<getmaxy()/2-10)
{
    if(GetAsyncKeyState(VK_LBUTTON))
    {cleardevice(); Register();
goto DEF;
    }
}

if(getcoursor.x>getmaxx()/2-textwidth("FREE PLAY")/2&&getcoursor.x<getmaxx()/2+textwidth("FREE PLAY")/2&&getcoursor.y>getmaxy()/2+10&&getcoursor.y<getmaxy()/2+70)
{
    if(GetAsyncKeyState(VK_LBUTTON))
    {login(ch);
    sc=gamecode(ch);
if(sc==1)
{cleardevice();settextstyle(10,HORIZ_DIR,5);setcolor(14);
    outtextxy(getmaxx()/2-textwidth("YOU WIN!")/2,getmaxy()/2-textheight("Y")/2,"YOU WIN!");getch();delay(5000);cleardevice();
}
if(sc==2)
{ cleardevice();settextstyle(10,HORIZ_DIR,5);setcolor(4);
    outtextxy(getmaxx()/2-textwidth("YOU LOOSE...")/2,getmaxy()/2-textheight("Y")/2 ,"YOU LOOSE...");getch();delay(5000);cleardevice();
}
    break;
    }
}
    }


    }outtextxy(200,200,"bye");delay(2000);
    getch();
    return 0;

}
