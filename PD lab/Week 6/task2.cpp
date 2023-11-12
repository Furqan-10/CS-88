#include<iostream>
using namespace std;   

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);
 main(){

string name;
float engmark,mathmark,chemmark,sciencemark,biomark;
cout<<"Enter student name: ";
cin>> name;
cout<<"Enter marks for English: ";
cin >> engmark;
cout<<"Enter marks for Maths: ";
cin >> mathmark;
cout<<"Enter marks for Chemistry: ";
cin >> chemmark;
cout<<"Enter marks for Social Science: ";
cin >> sciencemark;
cout<<"Enter marks for Biology: ";
cin >> biomark;
cout<<"Student Name: "<<name<<endl;
float newavg =  calculateAverage(engmark,mathmark,chemmark,sciencemark,biomark);
cout <<"Percentage: "<<newavg<<"%"<<endl;
string calgrade = calculateGrade(newavg);
cout<<"Grade: "<<calgrade;



 }
 float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology){
    float avg = (marksEnglish + marksBiology + marksChemistry + marksSocialScience + marksMaths)/5;
    return avg;
 }

string calculateGrade(float newavg){;
    string grade;
    if (newavg >= 90 && newavg <= 100){
        grade = "A+";
    }
    if (newavg >= 80 && newavg <= 90){
        grade = "A";
    }
    if (newavg >= 70 && newavg <= 80){
        grade = "B+";
    }
    if (newavg >= 60 && newavg <= 70){
        grade = "B";
    }
    if (newavg >= 50 && newavg <= 60){
        grade = "C";
    }
    if (newavg >= 40 && newavg <= 50){
        grade = "D";
    }
    if (newavg < 40){
        grade = "F";
    }
return grade;

}
