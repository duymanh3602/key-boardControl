#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

char mouse[1]={'o'};
int mouseX=10;
int mouseY=10;

void gotoxy(int x, int y){
	CursorPosition.X = x;
	CursorPosition.Y = y;
	SetConsoleCursorPosition(console, CursorPosition);
}

int main ()
{
    while(1)
    {
        system("cls");
        gotoxy(mouseX,mouseY);  cout<<mouse[0];
        char kb;
        kb=getch();
        if (kb=='d')
            mouseX=mouseX+2;
        else if (kb=='a')
            mouseX=mouseX-2;
        else if (kb=='w')
            mouseY=mouseY-1;
        else if (kb=='s')
            mouseY=mouseY+1;
        else if (kb==27)
            break;
    }
}


