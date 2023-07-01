#include<stdio.h>
#include<windows.h>
void gotoxy(int,int);
void main(){
    gotoxy(25,6);
    printf("Hello World"); 
}

void gotoxy(int x,int y){
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}