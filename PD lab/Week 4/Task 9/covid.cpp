#include<iostream>
using namespace std;

void tpchecker(int people,int tp);

main (){

	int people,tp;
	cout<<"Number of people in the household: ";
	cin>> people;
	cout<<"Number of rolls of TP: ";
	cin>> tp;
	tpchecker(people,tp);
}

void tpchecker(int people,int tp){

	int spd= people*57;
	int ts= tp*500;
	int days= ts/spd;
	if (days < 14){
	cout<< "Your TP will only last "<<days<< " days, buy more!";
	}
	if (days >= 14){
	cout<< "Your TP will last "<<days<< " days, no need to panic!";
	}

}		 