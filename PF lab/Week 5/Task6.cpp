#include<iostream>
using namespace std;
	
string check(char alphabet);

main() {
	cout<<"Enter a character (A/a): ";
	char alphabet;
	cin>> alphabet;
	string y;
	y = check(alphabet);
	}

string check(char alphabet){
	if (alphabet == 'A'){
	string cap = "You have entered Capital A";
	cout<<cap;
	return cap;


	}
	if (alphabet == 'a'){
	string small ="You have entered small a";
	cout<<small;
	return small;
	}
}



