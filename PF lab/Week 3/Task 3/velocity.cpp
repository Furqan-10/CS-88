#include<iostream>
using namespace std;
main() {

	cout<<"Enter Initial Velocity (m/s): ";
	float initial;
	cin>> initial;
	cout<<"Enter Acceleration (m/s^2): ";
	float acc;
 	cin>> acc;
	cout<<"Enter Time (s): ";
	float time;
	cin>> time;
	float final;
	final= (acc*time)+initial;
	cout<<"Final Velocity (m/s): "<<final;

}