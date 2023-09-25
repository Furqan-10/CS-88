#include<iostream>
using namespace std;
main() {

	int number,dig1,dig2,dig3,dig4,sum;
	cout<<"Enter a 4-digit number: ";
	cin>> number;
	dig1= number%10;
	number= number/10;
	dig2= number%10;
	number= number/10;
	dig3= number%10;
	number= number/10;
	dig4= number%10;
	number= number/10;
	sum= dig1+dig2+dig3+dig4;
	cout<<"Sum of the individual digits: "<<sum;
}
	
