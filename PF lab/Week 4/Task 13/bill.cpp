#include<iostream>
using namespace std;
void bill();

main() { 
	bill();
}

void bill()
{
	while(true){
	cout<<"Enter the day of purchase: ";
	string day;
	cin>> day;
	cout<<"Enter the total purchase amount: $";
	float amount;
	cin>> amount;
	int bill1;
	bill1=amount-(10*(amount/100));
	int bill2;
	bill2=amount-(5*(amount/100));
	if (day == "Sunday"){
	cout<<"Payable Amount: $"<<bill1;
	}
	if (day != "Sunday"){
	cout<<"Payable Amount: $"<<bill2;
	}
}
}
