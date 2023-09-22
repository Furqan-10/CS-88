#include<iostream>
using namespace std;
main () {

	cout<<"Enter Imposter Count: ";
	float i;
	cin>> i;
	cout<<"Enter Player Count: ";
	float p;
	cin>> p;
	float chance;
	chance= (i/p)*100;
	cout<<"Chance of being an imposter: "<<chance<<"%";
}