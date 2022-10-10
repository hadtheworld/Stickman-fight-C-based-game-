# Stickman-fight-C-based-game-
This project holds a simple game created by me in C++ language which only needs 2 extra header files of Graphics.h and windows.h to be created. Read the Read me file for in depth knowledge.

**imp**

The project has 3 main code files which hold the code of the whole game:
- main.cpp // This is tne main file which will create and run the interface of the game
- register.h // This is self declared header file whihc has functions for registering new users and storing teir data using file handling. Finally loging in the user after verification of user data by matching from the earlier saved data. Main.cpp file will call these function to handle authentication
- GAMECODE.h // This header file has the main game related code which will create the wole interface handle the key strokes by the user. The main.cpp file will be calling game interface from this header file only

**imp**

Key Words:
Tech – Technology
PC – Personal Computer
BGI - Borland Graphics Interface
GUI- Graphic User Interface
DOSBox- it is a free and open-source emulator of an Intel x86 PC designed primarily for the purpose of running software created for disk operating systems on IBM PC compatibles

**CHAPTER- 1**
Introduction:
Games may not be an essential part of our lives, but they are a very good way of relieving stress. In modern times PC games (video games) are spreading widely throughout the world and are being liked by millions. 
For my project “Virtual Fight (in C++ )” I have worked in the creation procedures of computer games, adding all essential parts which will make the game playable with graphics.

                                                        Animation and key strokes:
Animation:- is a method in which figures are manipulated to appear as moving images. In this we are getting the effect of animation through programming by making graphical images and continuously clearing the screen. This give the effect of the image in motion.

key Strokes:-
In this I am taking the key strokes of keyboard of a particular key or click of mouse button to carry out the desired animation. This creates the effect that our actions are causing the changes and thus created the controls of my game.

**CHAPTER-2**

                                                                  SURVEY
Geek for Geek
Draw a line in C++ graphics
Last Updated: 25-01-2018
graphics.h library is used to include and facilitate graphical operations in program. graphics.h functions can be used to draw different shapes, display text in different fonts, change colors and many more. Using functions of graphics.h you can make graphics programs, animations, projects and games. You can draw circles, lines, rectangles, bars and many other geometrical figures. You can change their colors using the available functions and fill them. [1]

Geek For Geek
How to include graphics.h in CodeBlocks?
Last Updated: 23-01-2018
Compiling graphics codes on CodeBlocks IDE shows an error: “Cannot find graphics.h”. This is because graphics.h runs is not available in the library folder of CodeBlocks. To successfully compile graphics code on CodeBlocks, setup winBGIm library. [2]

Programming Simplified
functions of graphics.h
1.	Drawing concentric circles
for ( radius = 25; radius <= 125 ; radius = radius + 20)
      circle(x, y, radius);
C graphics functions
•	arc
•	bar
•	bar3d
•	circle
•	cleardevice
etc…, [3]

TutorialsPoint
#include<graphics.h>
#include<isotream.h>
using namespace std;
int main() {
   int gd = DETECT, gm;
   initgraph(−gd, −gm, "C:\\TC\\BGI");
   getch();
   closegraph();
   return 0;
}

You Tube channel – VCR Game
*It is very good chanell to learn about graphics.h from basics to application level
[5]

**CHAPTER-3**

Code::Blocks IDE used
 
It is a very good IDE for programming in C++ (link to download in reference[6])

                                                     
                                                          Graphic.h and Windows.h:
Ghraphic.h:- header file contains functions for making graphical figure, writing graphical texts, coloring, etc.. on BGI window for Dos-Box. It was a header file in Turbo C and is not found in external compilers such as MinGW and also the compiler that comes with Code::Blocks IDE, So it needs to be downloaded externally
*I have mentioned in survey and the related link is in reference

Windows.h- This header file enable us to access windows API. I am using this header file for one of its function- “GetAsyncKeyState(KEY)” this function helps getting key presses in real time and thus I have added appropriate animations accordingly for creating the control of the game.

**CHAPTER-5**
                                                          RESULTS & DISCUSSION
I was able to get the motions done for keys specified to get the motion of game. The game has a HP (Health Point) for each fighter and it is used to determine the outcome of the game, so the game now has all the basic requirements that makes it playable, and can be have fun with. Although it still have a large scope for improvements (I have discussed it in future Scopes).


**CHAPTER-6**
                                                       CONCLUUSION & FUTURE SCOPE

-	Updates that I am planning are-
-	2 Player System (currently it only has 1 player option against computer):    Vs-1.2     [currently in progress…]
-	Reaction system (get reactions upon being hit) : Vs-1.3
-	Background options (you will get option to choose the background from ) : Vs-1.5
-	New Types of games (after all above updates…):  Vs-2.0 


REFERENCES
[1] https://www.geeksforgeeks.org/draw-line-c-graphics/
[2] https://www.geeksforgeeks.org/include-graphics-h-codeblocks/?ref=lbp
[3] https://www.programmingsimplified.com/c/graphics.h
[4] https://www.tutorialspoint.com/basic-graphic-programming-in-cplusplus
[5]https://www.youtube.com/watch?v=cK9pmJdTK9Y&list=PL5UFsTza4wWSNhe0xuO6ELw7ORU-UHNDO
[6] http://www.codeblocks.org/
