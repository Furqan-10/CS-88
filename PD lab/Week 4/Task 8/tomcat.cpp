#include<iostream>
using namespace std;

void sleep(int holiday);
main(){
	int holiday;
	cout<<"Holidays: ";
	cin>>holiday;
	sleep(holiday);
	}

void sleep(int holiday){
	int work=365-holiday;
	work=work*63;
	holiday=holiday*127;
	int min=work+holiday;
	if(min>30000){
	int totalmin=min-30000;
	int hours=totalmin/60;
	int finalmin;
	finalmin=totalmin%60;	
	cout<<"Tom will run away"<<endl;
	cout<<hours<<" hours and "<<finalmin<<" minutes for play";
	}

	if(min<30000){
	int total2min=30000-min;
	int mhours=total2min/60;
	int final2min;
	final2min=total2min%60;	
	cout<<"Tom sleeps well"<<endl;
	cout<<mhours<<" hours and "<<final2min<<" minutes less for play";
	}	

}