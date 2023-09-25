#include<iostream>
using namespace std;
main() {

	float weightinkg= 0.45;
	float inputValue;
	float convertedValue;
	cout<<"Enter weight in pounds: ";
	cin>> inputValue;
	convertedValue= weightinkg * inputValue;
	cout<< inputValue <<" pounds is equal to "<< convertedValue <<" kilograms.";

}