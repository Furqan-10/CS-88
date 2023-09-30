#include<iostream> 
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);


 main()
{
	system("cls");
	gotoxy(15,10);
	cout<<"F";
	gotoxy(16,10);
	cout<<"U";
	gotoxy(17,10);
	cout<<"R";
	gotoxy(18,10);
	cout<<"Q";
	gotoxy(19,10);
	cout<<"A";
	gotoxy(20,10);
	cout<<"N";
                                                                                         

}

void gotoxy(int x,int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


                                                                                                                                                                                     