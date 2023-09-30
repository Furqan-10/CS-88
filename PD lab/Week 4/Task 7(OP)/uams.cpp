#include <iostream>
using namespace std;

void printMenu() {
        cout << "University Admission Management System";
}

void calculateAggregate(string name, int matricMarks, int interMarks, int ecatMarks) {
	float aggregate = (matricMarks / 1100.0) * 0.3 + (interMarks / 550.0) * 0.3 + (ecatMarks / 400.0) * 0.4;
	cout << "Aggregate for " << name << ": " << aggregate << std::endl;
}

void compareMarks(string nameStd1, int ecatMarksStd1, std::string nameStd2, int ecatMarksStd2) {
        if (ecatMarksStd1 > ecatMarksStd2) {
        cout << nameStd1 << " has higher ecat marks than " << nameStd2 <<endl;
        }  
	else if (ecatMarksStd2 > ecatMarksStd1) {
        cout << nameStd2 << " has higher ecat marks than " << nameStd1 <<endl;
   	}  
	else {
	cout << "Both students have the same ecat marks" <<endl;
        }
}

int main() {
    printMenu();
    calculateAggregate("Furqan", 950, 480, 320);
    compareMarks("Furqan", 320, "Hamza", 350);
    
}