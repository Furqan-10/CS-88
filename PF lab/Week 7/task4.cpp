#include<iostream>
using namespace std;
int frequencyChecker(int number, int digit);

main(){

    int number,digit;
    cout<<"Enter a number: ";
    cin>> number;
    cout<<"Enter the digit to check: ";
    cin>> digit;
    cout<<"Frequency: "<<frequencyChecker(number,digit);
    
}

int frequencyChecker(int number, int digit){
    int frequency= 0;
    while(number != 0){

       int mod = number%10;
       if (mod == digit){
        frequency = frequency+1;
       }
        number = number/10;
    }
    return frequency;

}