#include<iostream>
#include<cmath>
using namespace std;

main() {
	float dis,angle;
	cout<<"Enter the distance from the base of the tree (in feet): ";
	cin>> dis;
	cout<<"Enter the angle of elevation (in degrees): ";
	cin>> angle;
	tan((angle/57.2958)*dis);
	cout<<"The height of the tree is: "<<tan(angle/57.2958)*dis<<" feet";
	return 0;
}