#include<iostream>
using namespace std;
void result();

main() {
	result();
}

void result()
{
	cout<<"Enter your score: ";
	int score;
	cin>> score;
	if (score > 50) {
	cout<<"Pass";
	}
	if (score <= 50) {
	cout<<"Fail";
	}	
}
	