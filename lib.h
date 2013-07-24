#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<string.h>
#include<io.h>
#include<malloc.h>
int m_pos=1, max_pos=8;
int main();
void filemenu();
void SetColor(int ForgC);
void gotoxy( int x, int y);
void SetColorAndBackground(int ForgC, int BackC);
FILE *fac;
FILE *data1, *data2, *data3, *data4;

    struct etudiant
       {char fac[6];
        char nom[10];
        char prenom[10];
        int age;
        char gen[2];
        char groupe[7];
        float bourse;
        int anne_etude;
       }etud,etud2;

 char faculte[20][6]={{"FEN"},
                           {"FIMM"},
                           {"FIMCM"},
                           {"FRT"},
                           {"FCIM"},
                           {"FTMIA"},
                           {"FIU"},
                           {"FUA"},
                           {"FCGC"},
                           {"FIEB"},
                           {"fen"},
                           {"fimm"},
                           {"fimcm"},
                           {"frt"},
                           {"fcim"},
                           {"ftmia"},
                           {"fiu"},
                           {"fua"},
                           {"fcgc"},
                           {"fieb"}};


//Culori
void SetColor(int ForgC)
{
     WORD wColor;
                          //We will need this handle to get the current background attribute
     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;

                           //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                     //Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}


//gotoxy

  COORD coord={0,0}; // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }


 //Culoarea fonului

 void SetColorAndBackground(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}

//Ascunderea cursorului

void hidecursor(int i)
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   if(i==1)
   info.bVisible = FALSE;
   else
   info.bVisible = TRUE;
   SetConsoleCursorInfo(consoleHandle, &info);
}


#include "crearea.cpp"
#include "afisarea.cpp"
#include "adaugarea.cpp"
#include "modificarea.cpp"
#include "sortarea.cpp"
#include "formarea.cpp"
#include "dinamica.cpp"
