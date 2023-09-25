#include<iostream>
using namespace std;
void feet();

main(){
	feet();
}
void feet()
 {
	cout<<"Enter the measurement in inches: ";
	float inches;
	cin>> inches;
	float feet;
	feet=inches/12;
	cout<<"Equivalent in feet: "<<feet;
}