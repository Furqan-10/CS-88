#include<iostream> 
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);


 main()
{
	system("cls");
	gotoxy(15,11);
	cout<<"H";
	gotoxy(15,12);
	cout<<"A";
	gotoxy(15,13);
	cout<<"S";
	gotoxy(15,14);
	cout<<"S";
	gotoxy(15,15);
	cout<<"A";
	gotoxy(15,16);
	cout<<"N";
                                                                                         

}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


                                                                                                                                                                                     