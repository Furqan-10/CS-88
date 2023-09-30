#include<iostream>
using namespace std;

void longer(int hr,int min);
main(){
	int hr,min;
	cout<<"Enter the number of hours: ";
	cin>>hr;
	cout<<"Enter the number of minutes: ";
	cin>>min;
	longer(hr,min);
	}

void longer(int hr,int min){
	int minute=hr*60;
	if(minute>min){
	cout<<hr;
	}
	if(minute<min){
	cout<<min;
	}
}