#include<iostream>
using namespace std;
main() {

	cout<<"Enter the movie name: ";
	string name;
	cin>> name;
	cout<<"Enter the adult ticket price: $";
	int adult;
	cin>> adult;
	cout<<"Enter the child ticket price: $";
	int child;
	cin>> child;
	cout<<"Enter the number of adult tickets sold: ";
	int adultsold;
	cin>> adultsold;
	cout<<"Enter the number of child tickets sold: ";
	int childsold;
	cin>> childsold;
	cout<<"Enter the percentage of the amount to be donated to charity: ";
	int charity;
	cin>> charity;
	cout<<endl;
	cout<<"Movie: "<<name<<endl;
	int amount;
	amount= (adult*adultsold)+(child*childsold);
	cout<<"Total amount generated from ticket sales: $"<<amount<<endl;
	int donation;
	donation= (charity*amount)/100;
	cout<<"Donation to charity (10%): $"<<donation<<endl;
	int remaining;
	remaining= amount-donation;
	cout<<"Remaining amount after donation: $"<<remaining;

}
