#include<iostream>
using namespace std;

void position(int p1,int p2);
main(){
	int p1,p2;
	cout<<"Enter your position: ";
	cin>>p1;
	cout<<"Enter your friend's position: ";
	cin>>p2;
	position(p1,p2);
	}

void position(int p1,int p2){
	if(p2-p1>5){
	cout<<"false";
	}
	if(p2-p1<=5){
	cout<<"true";
	} 
}