#include<iostream>
using namespace std;
void gender();

main() {
	gender();
}

void gender()
{
	cout<<"Enter a number: ";
	int number;
	cin>> number;
	if (number%2 == 0) {
	cout<<"Number "<<number<<" is even";
	}
	if (number%2 != 0) {
	cout<<"Number "<<number<<" is odd";
	}	
}
	