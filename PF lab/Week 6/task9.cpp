#include<iostream> 
using namespace std;

string checkTitle(int age,char gen);

main (){

	int age;
	char gen;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your gender (m/f): ";
	cin >> gen;
	string answer = checkTitle(age,gen);
	cout <<answer;

}


string checkTitle(int age,char gen){

	string result;
	if (age >= 18 && gen == 'm'){
		result = "Your personal title is: Mr.";
	}
	if (age >= 18 && gen == 'f'){
		result = "Your personal title is: Ms.";
	}
	if (age < 18 && gen == 'm'){
		result = "Your personal title is: Master";
	}
	if (age < 18 && gen == 'f'){
		result = "Your personal title is: Miss";
	}
	return result;
}
	