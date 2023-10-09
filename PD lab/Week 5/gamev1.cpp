#include<iostream>
#include<windows.h>
using namespace std;

int tankx=30,tanky=20,enem1x=2,enem1y=1,enem2x=72,enem2y=1,enem3x=45,enem3y=5;

void printmaze();
char getCharAtxy(short int x, short int y);
void gotoxy(int x,int y);
void Enemy1();
void eraseEnemy1();
void moveEnemy1();
void Enemy2();
void eraseEnemy2();
void moveEnemy2();
void Enemy3();
void eraseEnemy3();
void moveEnemy3();
void Tank();
void eraseTank();
void moveTankLeft();
void moveTankRight();
void moveTankUp();
void moveTankDown();


main(){

	system("cls");
	system("color 47");
	printmaze();
	Enemy1();
	Enemy2();
	Enemy3();
	Tank();
	
	while (true){
		if (GetAsyncKeyState(VK_LEFT)){
			moveTankLeft();
		}
		if (GetAsyncKeyState(VK_RIGHT)){
			moveTankRight();
		}
		if (GetAsyncKeyState(VK_UP)){
			moveTankUp();
		}
		if (GetAsyncKeyState(VK_DOWN)){
			moveTankDown();
		}
		moveEnemy1();
		Sleep(70);
		moveEnemy2();
		Sleep(70);
		moveEnemy3();
		Sleep(150);
	
	}
	
	gotoxy(0,40);
}

void printmaze(){

	cout <<"##########################################################################################################               "<<endl;
	cout <<"||                                                                            ||                         #               "<<endl;
	cout <<"||                                                                            ||  BATTLE TANKS: WARZONE  #	         "<<endl;
	cout <<"||          								      ||      			 #               "<<endl;
	cout <<"||          								      ||                 	 #	         "<<endl;
	cout <<"||                       						      ||                         #               "<<endl;
	cout <<"||          						                      ||##########################               "<<endl;
	cout <<"||          								      ||        		 #		 "<<endl;
	cout <<"||                                                                            ||  			 #	         "<<endl;
	cout <<"||   									      ||    			 #        	 "<<endl;
	cout <<"||   							                      ||    			 #	         "<<endl;
	cout <<"||   								              ||         		 #		 "<<endl;
	cout <<"||   								              ||    			 #	         "<<endl;
	cout <<"||   									      ||      			 #	         "<<endl;
	cout <<"||                                                                            ||          		 #		 "<<endl;
	cout <<"||                                                                            ||##########################               "<<endl;
	cout <<"||   								              ||          		 #               "<<endl;
	cout <<"||    								              ||        		 #               "<<endl;
	cout <<"||   								              ||         		 #        	 "<<endl;
	cout <<"||                         						      ||        		 #		 "<<endl; 
	cout <<"||                         						      ||       			 #		 "<<endl; 
	cout <<"||                         						      ||         		 #		 "<<endl; 
	cout <<"||                                                                            ||        		 #		 "<<endl;
	cout <<"||                                                                            ||         		 #		 "<<endl;
	cout <<"##########################################################################################################     		 "<<endl;
}

char getCharAtxy(short int x, short int y){

	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

void gotoxy(int x,int y){
	
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void Enemy1(){

	gotoxy(enem1x,enem1y);
	cout << "||==";
}

void eraseEnemy1(){

	gotoxy(enem1x,enem1y);
	cout << "    ";
}

void moveEnemy1(){

	eraseEnemy1();
	enem1y = enem1y+1;
	if (enem1y == 24){
		enem1y = 1;
	}
	Enemy1();
}


void Enemy2(){

	gotoxy(enem2x,enem2y);
	cout << "|==|";
}

void eraseEnemy2(){

	gotoxy(enem2x,enem2y);
	cout << "    ";
}

void moveEnemy2(){

	eraseEnemy2();
	enem2x = enem2x-1;
	if (enem2x == 5){
		enem2x = 72;
	}
	Enemy2();
}

void Enemy3(){

	gotoxy(enem3x,enem3y);
	cout << "|==|";
}

void eraseEnemy3(){

	gotoxy(enem3x,enem3y);
	cout << "    ";
}

void moveEnemy3(){

	eraseEnemy3();
	enem3x = enem3x+2;
	enem3y = enem3y+1;
	if (enem3x == 67){
		enem3x = 45;
	}
	if (enem3y == 15){
		enem3y = 5;
	}
	Enemy3();
}

	

void Tank(){

	gotoxy(tankx,tanky);
 	cout << " ____#____ " << endl;
	gotoxy(tankx,tanky+1);
  	cout << "|         |" << endl;
	gotoxy(tankx,tanky+2);
    	cout << "| [ ] [ ] |" << endl;
	gotoxy(tankx,tanky+3);
   	cout << "|_________|" << endl;
	cout<<endl;

}

void eraseTank(){

	gotoxy(tankx,tanky);
 	cout << "           " << endl;
	gotoxy(tankx,tanky+1);
  	cout << "           " << endl;
	gotoxy(tankx,tanky+2);
    	cout << "           " << endl;
	gotoxy(tankx,tanky+3);
   	cout << "           " << endl;
	cout<<endl;

}

void moveTankLeft(){

	if (getCharAtxy(tankx-1,tanky) == ' '){
	eraseTank();
	tankx = tankx-1;
	Tank();
	}
}

void moveTankRight(){

	if (getCharAtxy(tankx+11,tanky) == ' '){
	eraseTank();
	tankx = tankx+1;
	Tank();
	}
}

void moveTankUp(){

	if (getCharAtxy(tankx,tanky-1) == ' '){
	eraseTank();
	tanky = tanky-1;
	Tank();
	}
}

void moveTankDown(){

	if (getCharAtxy(tankx,tanky+4) == ' '){
	eraseTank();
	tanky = tanky+1;
	Tank();
	}
}

		