#include<iostream>
using namespace std;
main() {

	cout<<"Enter vegetable price per kilogram (in coins): ";
	float vegetable;
	cin>> vegetable;
	cout<<"Enter fruit price per kilogram (in coins): ";
	float fruits;
	cin>> fruits;
	cout<<"Enter total kilograms of vegetables: ";
	float vege;
	cin>> vege;
	cout<<"Enter total kilograms of fruits: ";
	float froot;
	cin>> froot;
	float rupee;
	rupee= (vegetable*vege)+(fruits*froot);
	float rupees;
	rupees= (rupee/1.94);
	cout<<"Total earnings in Rupees (Rps): "<<rupees;
}