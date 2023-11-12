#include<iostream>
using namespace std;

void printTable(int number);

main(){
int number;
cout<<"Enter a number: ";
cin>> number;
printTable(number);

}

void printTable(int number){
    int mul;
    for (int x=1 ; x < 11 ; x = x+1){
        mul = number*x;
        cout<<number<<" x "<<x<<" = "<<mul<<endl;
    }



}