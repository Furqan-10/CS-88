#include<iostream>
using namespace std;
int timetravel(int,int);

main(){
	int hrs,min;
	cout<<"Enter Hours: ";
	cin>>hrs;
	cout<<"Enter Minutes: ";
	cin>>min;
	timetravel(hrs,min);
	
}

int timetravel(int hrs,int min){
	hrs=hrs*60;
	int totalmin=hrs+min;
	totalmin=totalmin+15;
	int hours=totalmin/60;
	int minutes=totalmin%60;
	cout<<hours<<":"<<minutes;
}