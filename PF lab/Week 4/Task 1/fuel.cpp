#include<iostream>
using namespace std;
void fuel();

main(){
	fuel();
}
void fuel()
 {
	cout<<"Enter the distance: ";
	float distance;
	cin>> distance;
	float fuel;
	fuel=distance*10;
	cout<<"Fuel needed: "<<fuel;
}