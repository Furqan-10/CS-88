#include<iostream>
#include<cmath>
using namespace std;

main (){

	float a,b,c;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	float d = pow(b,2)-4*a*c;

	if (d == 0){
		cout << "Solution: x = "<< -b/(2*a);
	}
	if (d > 0){
		float root1 = (-b+sqrt(d))/(2*a);
		float root2 = (-b-sqrt(d))/(2*a);
		cout << "Solutions: x = "<<root1<< " and x = "<<root2;
	}
	if (d < 0){
		float root1 = -b/(2*a);
		float root2 = (sqrt(-d))/(2*a);
		cout << "Complex Solutions: x = "<<root1<< " + "<<root2<< "i and x = "<<root1<<" - "<<root2<< "i";
	}

}