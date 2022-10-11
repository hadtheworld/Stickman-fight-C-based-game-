//GAMECODE.h header file code
#include<iostream>
#include<graphics.h>
#include<windows.h>
#include<stdio.h>
#include<string>
using namespace std;
int gamecode(char* ab)
{   int gd=DETECT,gm; int X=0,j=0,l=0,k=0,m=0,n=0,Y=0,o=0;
cleardevice();
char ch[50];
strcpy(ch,ab);
setfillstyle(SOLID_FILL,7);
floodfill(5,5,7);
    settextstyle(9,HORIZ_DIR,5);
   outtextxy(getmaxx()/2-textwidth("Virtual Fight")/2,getmaxy()/2-textheight("Virtual Fight")/2,"Virtual Fight");
int a=5,i;char ar[5];
for(i=a;i>=0;i--)
{sprintf(ar,"%d",i);
delay(1000);
 outtextxy(getmaxx()/2-textwidth(ar)/2,getmaxy()/2-textheight(ar)/2+60,ar);
} cleardevice();
char arr[5],arr2[5],arr3[5];
int score=500,score2=500,p=0;

settextstyle(10,HORIZ_DIR,2);


while(1)
{                                       //below 8 line of code and if(1)[look at end.. of loop] blocks hold the overall graphic of the game
sprintf(arr,"%d",score);
sprintf(arr2,"%d",score2);

sprintf(arr3,"%d",o);
if(0<=30)outtextxy(50,30,arr3);
outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
    if(GetAsyncKeyState(VK_RIGHT)&&k==1)          //these if(GetAsyncKeyState()) blocks are for key controls of the figure
         { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
               setfillstyle(SOLID_FILL,7);
             bar(0,370,getmaxx(),getmaxy());
             setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

       setcolor(14);
         X+=10;                                    // this updation of 10 is responsible for the motion of figure
    circle(50+(X),310,10);                          //these below codes are code of stickman
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345);
    setcolor(7);
    circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,520-(X),370);
    line(510-(X),325,500-(X),345);
    line(510-(X),325,520-(X),345);

    delay(100);
    cleardevice();k=0;

    }

    if(GetAsyncKeyState(VK_LEFT)&&l==1)              //checks for left arrow key
         { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
             setfillstyle(SOLID_FILL,7);
             bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

         X-=10;
           setcolor(14);
  circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
    circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,520-(X),370);
    line(510-(X),325,500-(X),345);
    line(510-(X),325,520-(X),345);


    delay(100);
    cleardevice();l=0;

    }

    if(GetAsyncKeyState(VK_LEFT)&&l==0)                         //checks for left arrow key
    { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
        setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

X-=10;
  setcolor(14);
   circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,50+(X),370);
    line(50+(X),345,50+(X),370);
    line(50+(X),325,50+(X),345);
    line(50+(X),325,50+(X),345); setcolor(7);
    circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);
    delay(100);l=1;

    cleardevice();
    }

    if(GetAsyncKeyState(VK_RIGHT)&&k==0)                 //checks for right arrow key
    {outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
         setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());
         setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2,getmaxy()/2, 100+m);

X+=10;
  setcolor(14);
   circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,50+(X),370);
    line(50+(X),345,50+(X),370);
    line(50+(X),325,50+(X),345);
    line(50+(X),325,50+(X),345); setcolor(7);
     circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);
    delay(100);k=1;

    cleardevice();
    }
    if(GetAsyncKeyState(VK_SPACE)&&GetAsyncKeyState(VK_RIGHT))     //checks for right arrow key and spacebar
    {outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
         setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

         X+=40;
           setcolor(14);
    circle(50+(X),270,10);
    line(50+(X),280,50+(X),305);
    line(50+(X),305,40+(X),330);
    line(50+(X),305,60+(X),330);
    line(50+(X),285,40+(X),305);
    line(50+(X),285,60+(X),305); setcolor(7);
     circle(510-(X-Y),270,10);
    line(510-(X),280,510-(X),305);
    line(510-(X),305,500-(X),330);
    line(510-(X),305,520-(X),330);
    line(510-(X),285,500-(X),305);
    line(510-(X),285,520-(X),305);
    delay(100);
    cleardevice();k=0; setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);


    }
    if(GetAsyncKeyState(VK_SPACE)&&GetAsyncKeyState(VK_LEFT))         //checks for left arrow key and spacebar
    { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
        setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

         X-=40;
           setcolor(14);
   circle(50+(X),270,10);
    line(50+(X),280,50+(X),305);
    line(50+(X),305,40+(X),330);
    line(50+(X),305,60+(X),330);
    line(50+(X),285,40+(X),305);
    line(50+(X),285,60+(X),305); setcolor(7);
     circle(510-(X),270,10);
    line(510-(X),280,510-(X),305);
    line(510-(X),305,500-(X),330);
    line(510-(X),305,520-(X),330);
    line(510-(X),285,500-(X),305);
    line(510-(X),285,520-(X),305);
    delay(100);
    cleardevice();l=0; setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
    circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);



    }
     if(GetAsyncKeyState(VK_SPACE))                         //checks for spacebar key
    { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
        setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);


           setcolor(14);
   circle(50+(X),270,10);
    line(50+(X),280,50+(X),305);
    line(50+(X),305,40+(X),330);
    line(50+(X),305,60+(X),330);
    line(50+(X),285,40+(X),305);
    line(50+(X),285,60+(X),305); setcolor(7);
     circle(510-(X),270,10);
    line(510-(X),280,510-(X),305);
    line(510-(X),305,500-(X),330);
    line(510-(X),305,520-(X),330);
    line(510-(X),285,500-(X),305);
    line(510-(X),285,520-(X),305);
    delay(100);
    cleardevice();l=0; setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
    circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);



    }
    if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_RIGHT))         //checks for right arrow key and control key
    {
        outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
 setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

         X+=30;
           setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,50+(X),370);
    line(50+(X),345,50+(X),370);
    line(50+(X),325,80+(X),325);
    line(50+(X),325,50+(X),345); setcolor(7);
     circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,520-(X),370);
    line(510-(X),325,470-(X),325);
    line(510-(X),325,520-(X),345);
    delay(50);
    cleardevice();k=0; setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
     circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);
if(50+X<510-(X-50)&&50+X>510-(X+50))
score2-=10;
if(50+X<510-(X-40)&&50+X>510-(X+40))
score-=8;
o+=2;
sprintf(arr3,"%d",o);

cleardevice();
if(o>30&&o<=50)
{j=1;setcolor(RED);
outtextxy(50,30,arr3);
    o=0;
    }
    }
     if(GetAsyncKeyState(VK_CONTROL)&&j==1)                           //checks for left control key
    {
        outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
 setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);


           setcolor(14);
    for(n=0;n<50;n+=5)
        { setcolor(14);circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345);setcolor(7);
     circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,520-(X),370);
    line(510-(X),325,500-(X),345);
    line(510-(X),325,520-(X),345);setcolor(15);
            arc(50+X,360,0,180,30+n);setcolor(4);
            arc(510-X,360,0,180,30+n);
             bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);
        delay(50);
    cleardevice();}

if(50+X<510-(X-50)&&50+X>510-(X+50))
score2-=40;
if(50+X<510-(X-40)&&50+X>510-(X+40))
score-=38;
j=0;
    }
     if(GetAsyncKeyState(VK_CONTROL)&&GetAsyncKeyState(VK_LEFT))         //checks for left arrow key and control key
    { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
        setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());
         setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

         X-=30;
           setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,50+(X),370);
    line(50+(X),345,50+(X),370);
    line(50+(X),325,20+(X),325);
    line(50+(X),325,50+(X),345); setcolor(7);
     circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,520-(X),370);
    line(510-(X),325,530-(X),325);
    line(510-(X),325,520-(X),345);
    delay(50);
    cleardevice();l=0; setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
    circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);
if(50+X<510-(X-50)&&50+X>510-(X+50))
score2-=10;
if(50+X<510-(X-40)&&50+X>510-(X+40))
score-=8;
o+=2;
sprintf(arr3,"%d",o);

cleardevice();
if(o>30&&o<=50)
{j=1;setcolor(RED);
outtextxy(50,30,arr3);
    o=0;
    }
    }
if(GetAsyncKeyState(VK_TAB)&&GetAsyncKeyState(VK_LEFT))        //checks for left arrow key and tab key
    { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
        setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

         X-=30;
setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,50+(X),370);
    line(50+(X),345,10+(X),345);
    line(50+(X),325,50+(X),325);
    line(50+(X),325,50+(X),345);
    setcolor(7);
    circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,560-(X),345);
    line(510-(X),325,500-(X),345);
    line(510-(X),325,520-(X),345);
    delay(50);
    cleardevice();l=0; setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
     circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);

if(50+X<510-(X-50)&&50+X>510-(X+50))
score2-=20;
if(50+X<510-(X-40)&&50+X>510-(X+40))
score-=15;
o+=7;sprintf(arr3,"%d",o);
if(o>50)
{setcolor(14);
outtextxy(50,30,arr3);
    p=1;
    o=0;
}

    }
    if(GetAsyncKeyState(VK_TAB)&&p==1)               //checks for tab key
    { outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
        setfillstyle(SOLID_FILL,7);
        for(n=0;n<50;n+=5)
        { setcolor(14);circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345);setcolor(7);
     circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,520-(X),370);
    line(510-(X),325,500-(X),345);
    line(510-(X),325,520-(X),345);setcolor(15);setfillstyle(SOLID_FILL,14);
            bar(30+(X-n),370,70+(X+n),0);setcolor(4);setfillstyle(SOLID_FILL,13);
            bar(510-(X+n),370,510-(X-n),0);
             bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);
        delay(50);
    cleardevice();}

if(50+X<510-(X-70)&&50+X>510-(X+70))
score2-=100;
if(50+X<510-(X-50)&&50+X>510-(X+50))
score-=75;
p=0;
    }
    if(GetAsyncKeyState(VK_TAB)&&GetAsyncKeyState(VK_RIGHT))         //checks for right arrow key and tab
    {outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);
         setfillstyle(SOLID_FILL,7);
        bar(0,370,getmaxx(),getmaxy());setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

         X+=30;
setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,50+(X),370);
    line(50+(X),345,90+(X),345);
    line(50+(X),325,50+(X),325);
    line(50+(X),325,50+(X),345); setcolor(7);

    circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,480-(X),345);
    line(510-(X),325,500-(X),345);
    line(510-(X),325,520-(X),345);
    delay(50);
    cleardevice();l=0; setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345); setcolor(7);
     circle(510-(X),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,510-(X),370);
    line(510-(X),345,510-(X),370);
    line(510-(X),325,510-(X),345);
    line(510-(X),325,510-(X),345);
if(50+X<510-(X-50)&&50+X>510-(X+50))
score2-=20;
if(50+X<510-(X-5)&&50+X>510-(X+5))
score-=15;
o+=7;sprintf(arr3,"%d",o);
if(o>50)
{setcolor(14);
outtextxy(50,30,arr3);
    p=1;
    o=0;
}

    }
    
    if(1)                               //always executes
    {if(0<=30)outtextxy(50,30,arr3);
outtextxy(10,10,ch);
outtextxy(10,30,arr);
outtextxy(500,10,"Computer");
outtextxy(510,30,arr2);

 setcolor(14);
    circle(50+(X),310,10);
    line(50+(X),320,50+(X),345);
    line(50+(X),345,40+(X),370);
    line(50+(X),345,60+(X),370);
    line(50+(X),325,40+(X),345);
    line(50+(X),325,60+(X),345);
           setfillstyle(SOLID_FILL,7);
             bar(0,370,getmaxx(),getmaxy());
             setcolor(12);
for(m=0;m<10;m++)

    circle(getmaxx()/2, getmaxy()/2, 100+m);

       setcolor(7);

    circle(510-(X-Y),310,10);
    line(510-(X),320,510-(X),345);
    line(510-(X),345,500-(X),370);
    line(510-(X),345,520-(X),370);
    line(510-(X),325,500-(X),345);
    line(510-(X),325,520-(X),345);
    delay(100);

    delay(50);
cleardevice();

}

if(score2<=0||score<=0)
    break;
}
if(score<=0)
    return 2;
else return 1;

getch();


}
