#include<iostream>
using namespace std;
main() {

	cout<<"Enter the charge (Q) in coulombs: ";
	float charge;
	cin>> charge;
	cout<<"Enter the time (T) in seconds: ";
	float time;
	cin>> time;
	float current;
	current= charge / time;
	cout<<"The current (I) is: "<<current<<" Amperes";

}