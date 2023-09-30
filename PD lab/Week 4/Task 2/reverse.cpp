#include<iostream>
using namespace std;

void reverse(string tell);
main(){
	string tf;
	cout<<"Enter 'true' or 'false': ";
	cin>>tf;
	reverse(tf);
	}

void reverse(string tell){
	if(tell=="true"){
	cout<<"false";
	}
	if(tell=="false"){
	cout<<"true";
	}
}