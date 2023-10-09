#include<iostream>
using namespace std;

void  pyramidVolume();
main(){

pyramidVolume();

}

void pyramidVolume(){

	float len,wid,height;
	cout<<"Enter the length of the pyramid (in meters): ";
	cin>> len;
	cout<<"Enter the width of the pyramid (in meters): ";
	cin>> wid;
	cout<<"Enter the height of the pyramid (in meters): ";
	cin>> height;
	string unit;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin>> unit;

	float volmeters = (1.0/3.0*len*wid*height);
	float volcm = (1.0/3.0*len*wid*height)*(1000000.0);
	float volmil = (1.0/3.0*len*wid*height)*(1000000000.0);
	float volkilo = (1.0/3.0*len*wid*height)/(1000000000.0);

	if (unit == "meters") {
		cout<<"The volume of the pyramid is: "<<volmeters<<" cubic meters";
		}
	if (unit == "kilometers") {
		cout<<"The volume of the pyramid is: "<<volkilo<<" cubic meters";
		}
	if (unit == "millimeters") {
		cout<<"The volume of the pyramid is: "<<volmil<<" cubic meters";
		}
	if (unit == "centimeters") {
		cout<<"The volume of the pyramid is: "<<volcm<<" cubic meters";
		}
}







