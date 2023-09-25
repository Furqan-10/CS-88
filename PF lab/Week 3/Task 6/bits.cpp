#include<iostream>
using namespace std;
main () {


	float megabytes= 1024;
	float convertedValue;
	cout<<"Enter the size in megabytes (MB): ";
	cin>> megabytes;
	convertedValue= (((megabytes*1024)*1024)*8);
	cout<<megabytes<<" MB is equivalent to "<< convertedValue <<" bits.";
 }