#include<iostream> 
using namespace std;

float perimeter(char alpha,float number);

main(){

	char letter;
	float number;
	cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
	cin >> letter;
	cout << "Enter the value: ";
	cin >> number;
	float answer = perimeter(letter,number);
	cout << "The perimeter is: "<<answer;
	
}

float perimeter(char alpha,float number){

	float perimeter;
	if (alpha == 's'){
		perimeter = 4*number;
	}
	if (alpha == 'c'){
		perimeter = 6.28*number;
	}
	if (alpha == 't'){
		perimeter = 3*number;
	}
	if (alpha == 'h'){
		perimeter = 6*number;
	}
	return perimeter;
}