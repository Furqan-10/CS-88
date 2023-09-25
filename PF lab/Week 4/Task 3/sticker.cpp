#include<iostream>
using namespace std;
void sticker();

main(){
	sticker();
}
void sticker()
 {
	cout<<"Enter the side length of the Rubik's Cube: ";
	float side;
	cin>> side;
	float sticker;
	sticker=(6*side)*side;
	cout<<"Number of stickers needed: "<<sticker;
}