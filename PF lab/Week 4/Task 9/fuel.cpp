#include<iostream>
using namespace std;

void calculatefuel();


main () {

	calculatefuel();
	
}

void calculatefuel() {

	cout << "Enter the distance: ";
	float distance;
	cin >> distance;
	
	if (distance > 10){
	float fuel = distance*10;
	cout << "Fuel needed: "<<fuel;
	}
	if (distance <= 10){
	cout << "Fuel needed: 100";
	}
}